#include <iostream>
using namespace std;

int main() {

    int n,m;
    cin>>n>>m;

    int a[m*2];

    for(int i = 0; i<m*2; i++){
        cin>>a[i];
    }


    int z = 1;
    int l = 1;
    int p = 1;
    int res = 0;
    for(int i = 0; i<m*2; i++){
        if(z == 1 && l == 1 && p == 1){
            res = 1;
        }
    }

    cout<<res<<" "<<res<<" "<<res;

    return 0;
}
