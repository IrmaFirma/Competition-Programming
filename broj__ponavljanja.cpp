#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    sort(arr, arr+n);
    auto k = lower_bound(arr, arr+n, x)-arr;
    if(k<n && arr[k] == x){
        cout<<"X je na indexu: "<<k;
    }
    auto a = lower_bound(arr, arr+n, x);
    auto b = upper_bound(arr, arr+n, x);
    cout<<"Broj ponavljanja "<<b-a;
}
