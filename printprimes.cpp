/******************************************************************************
 Bilten 2006 II zadatak dva

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int n, m, jeProst;
    cin>>n>>m;
    
    for(int i = n; i<=m; i++){
        jeProst=1;
        for(int j = 2; j<=i/2; j++){
            if(i%j==0){
                jeProst=0;
                break;
            }
        }
        if(jeProst==1) cout<<i<<" ";
    }
    
    return 0;
}
