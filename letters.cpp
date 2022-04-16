#include<bits/stdc++.h>
using namespace std;

int main()
{
    string slova;
    cin>>slova;
    
    int length = slova.length();
    
    for(int i = 0; i<slova.length(); i++){
        if(slova[i] == 'A'){
            slova.erase(remove(slova.begin(), slova.end(), slova[i]), slova.end());
            length--;
        } 
        if(slova[i] == 'O'){
            slova.erase(remove(slova.begin(), slova.end(), slova[i]), slova.end());
            length--;
        } 
        if(slova[i] == 'U'){
            slova.erase(remove(slova.begin(), slova.end(), slova[i]), slova.end());
            length--;
        } 
        if(slova[i] == 'E'){
            slova.erase(remove(slova.begin(), slova.end(), slova[i]), slova.end());
            length--;
        } 
        if(slova[i] == 'I'){
            slova.erase(remove(slova.begin(), slova.end(), slova[i]), slova.end());
            length--;
        } 
    
    }
    
    
    if(length-2 == 0) cout<<"BOSNA";
    else cout<<slova;

	return 0;
}
