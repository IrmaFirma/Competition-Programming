#include <iostream>
#include <string>

using namespace std;

int main()
{
    int c,s,m;
    cin>>c>>s>>m;
    
    int res = c-(s+m);
    if(res<0){
        res = 0;
    }
    cout<<res;
    return 0;
}
