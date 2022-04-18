/******************************************************************************
Bilten 2018 cetvrti zadatak

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    
    int n, a, b, c;
    cin>>n>>a>>b>>c;
    
    int suma = 0;
    
    for(int i = 0; i<=n; i++){
        if(((i%a==0) || (i%b==0)) && (i%c!=0)) suma+=i;
    }
    
    cout<<suma;

    return 0;
}
