/******************************************************************************
Sort array of strings aplhabetically

*******************************************************************************/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool comparator(string a, string b){
    return a<b;
}

int main()
{
    int n = 5;
    string a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    
    sort(a, a+n, comparator);
    
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
