/******************************************************************************
Is n fibonacci number?

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

bool jeKvadrat(int x){
    int s = sqrt(x);
    return (s*s==x);
}

bool fibonacci(int n){
    return jeKvadrat(5*n*n+4) || jeKvadrat(5*n*n-4);
}

int main()
{
    int n;
    cin>>n;
    if(fibonacci(n)) cout<<"jest";
    else cout<<"nije";
    return 0;
}
