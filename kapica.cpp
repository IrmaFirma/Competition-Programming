#include <iostream>
#include <string>
using namespace std;

int main(){
    int a[3];
    char first = 'C';
    char second = 'C';
    char third = 'C';
    for(int i = 0; i<3; i++){
        cin>>a[i];
    }
    
    for(int i = 0; i<3; i++){
        if(a[0] == 2){
            first = 'B';
            second = 'C';
            third = 'C';
        }
        else if(a[1] == 2){
            first = 'C';
            second = 'B';
            third = 'C';
        }else if(a[2] == 2){
            first = 'C';
            second = 'C';
            third = 'B';
        }else{
            first = 'B';
            second = 'B';
            third = 'B';
        }
    }
    
    cout<<first<<endl;
    cout<<second<<endl;
    cout<<third<<endl;
   
    return 0;
}
