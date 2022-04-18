/******************************************************************************
 Bilten 2018 II zadatak tri

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, suma=0, br=0;
    cin>>n;
    
    for(int i = 0; i<n; i++){
        if((i%47==0) && (i%94!=0)){
            suma+=i;
            br++;
        }
    }
    
    cout<<suma<<" "<<br;

    return 0;
}
