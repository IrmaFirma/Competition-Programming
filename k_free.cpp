#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int a[n];

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    int res = 0;
    for(int i = 0; i<n; i++){
        if(k*a[i] != a[i+1]){
            res=n/2;
        }
    }

    cout<<res;

    return 0;
}
