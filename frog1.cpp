#include<bits/stdc++.h>

using namespace std;

int memo[100010],n,h[100010];
bool izracunat[100010]; ///  niz koji provjerava je li vec izracunat dp

int najmanjiUmor(int n){
    if( izracunat[n] == true ) /// ako je vec izracunato
        return memo[n];

    izracunat[n]=true; /// stavljamo da je izracunato
	if(n==2){
	 memo[n]=abs(h[2]-h[1]);
	 return memo[n];
    }
	if(n<=1) return 0; /// za 1 je rjesenje 0, jer je zaba na pocetku vec na 1 i ne treba se umarati da dodje


	memo[n]=min( najmanjiUmor(n-1)+abs(h[n]-h[n-1]) , najmanjiUmor(n-2)+abs(h[n]-h[n-2]));

	/// zaba je mogla na lokvanj n doskociti sa n-1 ili sa n-2, i to su dva prethodna stanja

return memo[n];
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>h[i];
	}
	cout<<najmanjiUmor(n)<<endl;
	return 0;
}

