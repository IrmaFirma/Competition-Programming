#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

#include<cmath>
#include<map>

using namespace std;
#define pb push_back
#define mp make_pair

int a[5010];

int main()
{

    int n, maxi=0, mini=1e9;

    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i], maxi=max(maxi, a[i]), mini = min(mini, a[i]);

    int kolkoMini=0, kolkoMaxi=0; /// ovo ce nam reci koliko ima min i max vrijednosti u TRENUTNOM intervalu

    int l=0, r=0, najkraci=5010;
    if(a[0]==maxi)kolkoMaxi++;
    if(a[0]==mini)kolkoMini++; /// 5 5 5 5, zbog ovog ne moze else if, nego samo if

    while(l<=r && r<n){
        if(kolkoMaxi>0 && kolkoMini>0) {
            najkraci=min(najkraci, r-l+1); /// ako nadje kraci, da to upise u varijablu najkraci
            /// najkraci = min( 4, 2 ), najkraci postaje 2, a  bio je 4
            if(a[l]==mini)kolkoMini--; /// provjeravamo da li izbacivanjem lijeve granice se gubi min
            if(a[l]==maxi)kolkoMaxi--; /// provjeravamo da li izbacivanjem lijeve granice se gubi max
            l++; /// pomjeramo lijevu granicu za 1
        }
        else{
            r++; /// pomjeramo desnu granicu za 1
            if(a[r]==maxi)kolkoMaxi++; /// nakon sto se pomjerimo, ako naletimo na max, povecamo broj maxova
            if(a[r]==mini)kolkoMini++; /// nakon sto se pomjerimo, ako naletimo na min, povecamo broj minova
        }
    }

    cout<<najkraci<<endl;

return 0;
}



