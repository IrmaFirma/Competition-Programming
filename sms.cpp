#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    
    int res = 0;
    for(int i = 0; i<n; i++){
        if(a[i] == "A" || a[i] == "D"|| a[i] == "G" || a[i] == "J" 
        || a[i] == "P" || a[i] == "T" || a[i] == "W"|| a[i] == "M" ){
            a[i] = "1";
            res += stoi(a[i]);
        }else if(a[i] == "B" || a[i] == "E"|| a[i] == "K" || a[i] == "H" 
        || a[i] == "N" || a[i] == "Q" || a[i] == "U" || a[i] == "X"){
            a[i] = "2";
            res += stoi(a[i]);
        }else if(a[i] == "C" || a[i] == "F"|| a[i] == "I" || a[i] == "L" 
        || a[i] == "O" || a[i] == "R" || a[i] == "V" || a[i] == "Y"){
            a[i] = "3";
            res += stoi(a[i]);
        }else if(a[i] == "S" || a[i] == "Z"){
            a[i] = "4";
            res += stoi(a[i]);
        }
    }
    cout<<res;

    return 0;
}

