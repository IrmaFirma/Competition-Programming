#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a[6];
    for(int i = 0; i<6; i++){
        cin>>a[i];
    }
    
    int res = 0;
    for(int i = 1; i<6; i+=2){
        cout<<a[i];
    }

    return 0;
}
