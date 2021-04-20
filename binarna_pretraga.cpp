// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int array[n];
    for(int i = 0; i<n; i++){
        cin>>array[i];
    }
    
    int x;
    cin>>x;
    
    
    int a = 0, b = n - 1;
    while(a<=b){
        int k = (a+b)/2;
        if(array[k] == x){
            cout<<"Trazeni broj na indexu "<<k;
        }
        if(array[k] > x) b = k-1;
        else a = k+1;
    }

    return 0;
}
