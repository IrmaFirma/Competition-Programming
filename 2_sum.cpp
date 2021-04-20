#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n; //broj clanova niza
    int niz[n];
    for(int i = 0; i<n; i++){
        cin>>niz[i]; //unos clanova
    }

    int x;
    cin>>x; //trazena suma

    sort(niz, niz+n);
    int a = 0; //pocetna granica
    int b = n-1; // krajnja granica
    while(a<b){
        if(niz[a]+niz[b] == x){
			cout<<niz[a]<<" "<<niz[b]<<endl;
			return 0;
        }
        (niz[a] + niz[b] < x)? a++: b--;
       
    }
    cout<<"-1";



    return 0;



}
