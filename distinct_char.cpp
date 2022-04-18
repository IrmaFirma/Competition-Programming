/******************************************************************************
 Bilten 2018 II zadatak dva

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int jeDrugi, br=0;
    string s;
    cin>>s;
    
    for(int i = 0; i<=s.length(); i++){
        jeDrugi=1;
        for(int j=0; j<s.length(); j++){
            if((s[i]==s[j]) && i!=j){
                jeDrugi=0;
                break;
            }
        }
        if(jeDrugi==1) br++;
    }
    
    cout<<br;

    return 0;
}
