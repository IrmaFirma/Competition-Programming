/******************************************************************************
Bilten 2019 treci zadatak

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    
    for(int i = 0; i<n; i++){
        if(a[i+1] < a[i]) cout<<a[i]<<" < "<<a[i+1]<<endl;
    }
    
    return 0;
}
