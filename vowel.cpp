#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    cin>>a;
    int br = 0;
    
    for(int i = 0; i<a.length(); i++){
        if(a[i] == 'A' || a[i] == 'a' 
        || a[i] == 'E' || a[i] == 'e' 
        ||a[i] == 'I' || a[i] == 'i' 
        ||a[i] == 'O' || a[i] == 'o' 
        ||a[i] == 'U' || a[i] == 'u'){
            a[i] = 'x';
            br++;
            
        }
    }
    
    cout<<br<<endl;
    cout<<a;

    
    return 0;
}
