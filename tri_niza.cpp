#include <iostream>
using namespace std;

int main() {

    int n, m, t;
    cin>>n>>m>>t;
    int a[n];
    int b[n];
    int c[m];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    for(int j = 0; j<n; j++){
        cin>>b[j];
    }
    for(int k = 0; k<m; k++){
        cin>>c[k];
    }
    int res1 = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            for(int k = 0; k<m; k++){
                if(t==0){
                    if(a[i] == b[j]){
                        if(a[i] + c[k] == b[j]) res1++;
                    }
                }
                if(t == 1){
                    if(a[i] + c[k] == b[j]) res1 = n;
                }
            }
        }
    }

    cout<<res1;
    return 0;
}
