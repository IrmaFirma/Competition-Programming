/******************************************************************************
Fibonacci numbers up to n

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    
    int t1=0, t2=1, sljBroj, n;
    cin>>n;
    sljBroj = t1+t2;
    cout<<t1<<" ";
    while(sljBroj<=n){
        cout<<sljBroj<<" ";
        t1=t2;
        t2=sljBroj;
        sljBroj=t1+t2;
    }
    
    return 0;
}
