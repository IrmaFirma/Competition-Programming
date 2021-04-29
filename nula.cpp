#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int b[n];
    for(int i = 0; i<n; i++){
        cin>>b[i];
    }
    
    int p_br = 0;
    int n_br = 0;
    
    for(int i = 0; i<n; i++){
        if(b[i] == 0){
            if(b[i-1] < 0 && b[i+1] > 0) p_br++;
            else if(b[i-1] > 0 && b[i+1] < 0) n_br++;
        }
    }
    
    cout<<p_br<<" "<<n_br;

    return 0;
}
