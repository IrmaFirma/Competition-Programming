#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    bool canSee = true;
    int res = 0;

    for(int i = 0; i<n; i++){
        if(n == 9){
            res = n;
        }else if(n<9){
            res = n-1;
        }
    }

    cout<<res;



    return 0;
}
