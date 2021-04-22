#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>

using namespace std;

int price[1010]; /// niz koji cuva cijene
bool izracunato[1010];
int memo[1010];

int presjekStapa( int n )
{
    // if( memo[n]!=0 ) return memo[n]; moglo je i ovako u ovom konkretnom slucaju
    if( n==1 ) return price[1]; /// ako je ostao mali komadic duzine 1
    if( izracunato[n] == true ) return memo[n]; /// ako smo vec izracunali, NE PONOVO!

    memo[n] = price[n]; /// ako uopste necemo presjecati!

    /// imamo n-1 prethodniih stanja, pa ih moramo 'obici' for petljom
    for( int i=1; i<=n-1; i++ ){ /// i predstavlja duzinu zadnjeg komada kojeg presjecamo
       memo[n] = max( memo[n], presjekStapa(n-i) + price[i]);
    }

    izracunato[n] = true; /// obiljezimo da smo vec izracunali
    return memo[n];
}

int main()
{
    int n;
    cin>>n;
    for( int i=1;i<=n;i++ ) cin>>price[i];

    cout << presjekStapa( n )<<endl;

return 0;





}
