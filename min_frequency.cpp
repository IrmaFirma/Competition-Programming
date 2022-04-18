/******************************************************************************
 Bilten 2018 II zadatak cetiri

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    int n, min, f=0;
    cin>>n;
    int a[n];
    min = a[0];
    
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    
    for(int i = 0; i<n; i++){
        if(a[i] < min) min = a[i];
    }
    
    for(int i = 0; i<n; i++){
        if(a[i] == min) f++;
    }
    
    cout<<min<<" "<<f;

    return 0;
}
