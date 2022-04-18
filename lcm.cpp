/******************************************************************************
LCM OF A AND B

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int a, b, max;
    cin>>a>>b;
    
    if(a>b) max=a;
    else max=b;
    
    do{
        if((max%a==0) && (max%b==0)){
            cout<<"LCM: "<<max;
            break;
        }else max++;
    }while(true);
    
    return 0;
}
