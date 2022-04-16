#include <iostream>
#include <string>
using namespace std;

int main(){
    
    char a[256];
    fgets(a, sizeof(a), stdin);
    int i =0;
    int bra = 0, bre=0, bro=0, bri=0, bru=0;
    
    while(a[i]){
        if(a[i] == 'A' || a[i] == 'a') bra++;
        if(a[i] == 'E' || a[i] == 'e') bre++;
        if(a[i] == 'O' || a[i] == 'o') bro++;
        if(a[i] == 'U' || a[i] == 'u') bru++;
        if(a[i] == 'I' || a[i] == 'i') bri++;
        i++;
    }
    
    cout<<bra+bro+bri+bre+bru;
    return 0;
}
