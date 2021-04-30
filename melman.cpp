#include <iostream>
#include <string>
using namespace std;
//radi samo za jedan primjer 
int main() {
    int s, m, n;
    cin>>s>>m>>n;
    int t[n];
    for(int i = 0; i<n; i++){
        cin>>t[i];
    }
    
    int max = t[0];
    for(int i = 0; i<n; i++){
        if(t[i] > max) {
            max = t[i];
            m = m + 30;
            if(m>30){
                s = s+1;
                m = 0;
            }
        }
    }
    
    cout<<max<<endl;
    cout<<s<<endl;
    cout<<m;
    
    return 0;
}
