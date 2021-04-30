#include <iostream>

using namespace std;

int main()
{
    int x, z;
    cin>>x>>z;
    int res = 0;
    int slj = x+1;
    int pret = x-1;
    if(slj % 10 == z){
        res = slj;
    }else if(pret % 10 == z){
        res = pret;
    }else if(x % 10 == z){
        res = x;
    }
    
    cout<<res;

    return 0;
}
