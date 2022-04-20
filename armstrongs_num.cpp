/******************************************************************************
 Bilten 2016 zadatak jedan

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int a, b, br=0;
    cin>>a>>b;

    for(int i = a; i<=b; i++){
        int x=i/100;
        int y=(i/10)%10;
        int z=i%10;
        if(((x*x*x) + (y*y*y) + (z*z*z)) == i) br++;
    }
    
    if(a<99 || b<99) cout<<"Greska";
    else cout<<br;

    return 0;
}
