/******************************************************************************
Bilten 2019 drugi zadatak

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int a[256];
    int i = 0, suma = 0;
    
    while(suma<=100){
        cin>>a[i];
        if(a[i] % 10 != 0){
            suma+=a[i];
        }
        i+=2;
    }
    
    cout<<suma;
    return 0;
}
