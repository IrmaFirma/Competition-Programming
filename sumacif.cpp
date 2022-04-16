#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int d = x / 10;
    int j = x % 10;
    
    if(d==0 || d>9) cout<<"Broj nije dvocifren.";
    else cout<<d+j;

	return 0;
}
