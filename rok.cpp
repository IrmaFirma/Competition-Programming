#include <iostream>
#include <string>
using namespace std;
//nedovrsen 
int main()
{
    int n;
    cin>>n;
    int danas[3];
    for(int i = 0; i<3; i++){
        cin>>danas[i];
    }
    int rok[n*2];
    for(int i = 0; i<n*2; i++){
        cin>>rok[i];
    }

    string result1 = " ";
    string result2 = " ";
    for(int i = 0; i<n*2; i++){
        if(danas[1] >= rok[1]){
            result1 = "DA";
        }else if(danas[1] < rok[1]){
            result1 = "NE";
        }
        if(danas[1] >= rok[4]){
            result2 = "DA";
        }else if(danas[1] < rok[4]){
            result2 = "NE";
        }
    }
    cout<<result1<<endl;
    cout<<result2<<endl;
}
