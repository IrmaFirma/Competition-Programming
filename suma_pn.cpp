/******************************************************************************
Bilten 2019 prvi zadatak

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int n, sumap = 0, suman = 0;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    
    
    for(int i = 0; i<n; i++){
        if(i%2!=0) sumap+=a[i];
        else suman+=a[i];
    }
    
    cout<<sumap<<" "<<suman;

    return 0;
}
