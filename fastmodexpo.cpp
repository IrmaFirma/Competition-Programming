///fast mod expo 0(n)
#include <iostream>
using namespace std;

int fastExpo(int a, long long n, int m)
{
    int ans = 1;
    for(int i=1 ; i<=n ; ++i)
        ans = (ans * a) % m;

    return ans;
}

int main(){

    int a, b, m;
    cin>>a>>b>>m;
    cout<<fastExpo(a, b, m);
    return 0;
}
