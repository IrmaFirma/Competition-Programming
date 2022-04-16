#include <iostream>

using namespace std;

int main(){
    
    int a, b, c;
    cin>>a>>b>>c;
    
    if(a+b<c || b+c<a || a+c<b) cout<<"Nije trougao.";
    else if(a==b && b==c && a==c) cout<<"Trougao je jednakostranicni.";
    else if(a==b && c!=a && c!=b) cout<<"Trougao je jednakokraki.";
    else if(b==c && a!=b && a!=c) cout<<"Trougao je jednakokraki.";
    else if(c==a && b!=a && b!=c) cout<<"Trougao je jednakokraki.";
    else if(a==b+1 || a==c+1) cout<<"Trougao je pravougli.";
    else if(b==a+1 || b==c+1) cout<<"Trougao je pravougli.";
    else if(c==b+1 || c==a+1) cout<<"Trougao je pravougli.";
    else cout<<"TROUGAO.";

    
    return 0;
}
