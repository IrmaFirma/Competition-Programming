#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    
    if(a+b<c || b+c<a || a+c<b) cout<<"NIJE TROUGAO";
    else if(a==b && c!=a && c!=b) cout<<"DA";
    else if(b==c && a!=b && a!=c) cout<<"DA";
    else if(c==a && b!=a && b!=c) cout<<"DA";
    else cout<<"NE";

    return 0;
}
