// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int x, int y){
    if((x%2)!=(y%2)){
        if(x%2==0) return true;
        else return false;
    }else{
        if((x%2) == (y%2)){
            if(x%2==0) return x<y;
            else return x>y;
        }
    }
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    
    sort(a, a+n, cmp);
     for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
