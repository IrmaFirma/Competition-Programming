/// kod uzet sa https://www.geeksforgeeks.org/greedy-algorithm-to-find-minimum-number-of-coins/
#include <bits/stdc++.h>
using namespace std;

int niz[100010];

int main()
{
    int n, x;

    cin>>n;
    for(int i=0;i<n;i++)cin>>niz[i];
    cin>>x;


    int a = 0, b = n-1;
    while (a <= b) {

    int mid = (a+b)/2;

    if (niz[mid] == x) {
        cout<<mid+1<<endl;
        return 0;
    }

    if (niz[mid] > x) a=mid+1; /// 200 100 70 50 10

    else b=mid-1;
    }


    cout<<-1<<endl; /// ako ne nadje

    return 0;
}

