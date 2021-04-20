#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; //ukupan broj cokoladica
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i]; //unos clanova niza
    }
    int c;
    cin>>c; //max broj kalorija

    int prethodna_kalorija = a[0]; // vrijednost kalorije prije
    vector<int>ans; // rezultat

    sort(a, a+n);
    for(int i = n-1; i>=0; i--){
        while(c>=a[i]){
                c = c-a[i];
                prethodna_kalorija = a[i];
                ans.push_back(a[i]);

        }
    }
    auto size = ans.size();
    auto sum = 0;
    cout<<"Ukupan broj mogucih cokoladica: ";
    cout<<size;
    cout<<"Vrijednosti koje se koriste: ";
    for(int i = 0; i<size; i++){
        cout<<ans[i]<<' ';
    }
    cout<<"Suma kalorija ";
    for(int i = 0; i<size; i++){
        sum+=ans[i];
    }
    cout<<sum;



}
