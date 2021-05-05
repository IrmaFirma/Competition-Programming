#include <iostream>
#include <string>
using namespace std;

int main() {

    int n, m;
    cin>>n>>m;
    int g[n*4];
    for(int i = 0; i<n*4; i++){
        cin>>g[i];
    }

    string p = " ";
    int res = 0;

    for(int i = 0; i<n*4; i++){
        if(res = 0){
            p = "nemoguce";
        }
    }

    cout<<p;

    return 0;
}
