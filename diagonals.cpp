#include <iostream>

using namespace std;

// int matrica[105][105];

int main()
{   
    int n, dijagonala1=0,dijagonala2=0, brojUMatrici;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>brojUMatrici;
            if(i==j){ /// dijagonala lijevi gornji cosak - desni donji
                dijagonala1+=brojUMatrici;
            }
            if(i+j==n-1){ /// dijagonala desni gornji cosak - lijevi donji
                dijagonala2+=brojUMatrici;
            }
        }
    }
    
    cout<<abs( dijagonala2-dijagonala1 )<<endl;
    
    return 0;
}
