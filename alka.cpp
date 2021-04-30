#include <iostream>
#include <string>
using namespace std;
//radi za 2/3 slucaja
// ne radi kada ima vise min/kada je min 0
int main() {
    int n;
    cin>>n;
    int g[n];
    for(int i = 0; i<n; i++){
        cin>>g[i];
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (g[i] != g[0]) {
             res = n-1;
        }
        if(g[i] == g[0]) {
           res = n;
        }
    }
    cout<<res;
    return 0;
}
