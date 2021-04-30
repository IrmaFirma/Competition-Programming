#include <iostream>
#include <string>
using namespace std;

int main() {
    int e[9];
    int t[9];
    
    int e_sum = 0;
    int t_sum = 0;
    string win = " ";
    int win_result = 0;
    
    for(int i = 0; i<9; i++) cin>>e[i];

    for(int i = 0; i<9; i++) cin>>t[i];
    
    for(int i = 0; i<9; i++){
        e_sum += e[i];
        t_sum += t[i];
        if(e_sum > t_sum){ win = "Edi"; win_result = e_sum;}
        else if(e_sum <t_sum){ win = "Tin"; win_result = t_sum;}
        else {win ="Nema pobjednika";win_result = e_sum; }
    }
    cout<<win<<" "<<win_result;
    
    
    return 0;
}
