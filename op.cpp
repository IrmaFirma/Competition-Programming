 #include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b, c;
    string op1, op2;
    cin>>a;
    cin>>op1;
    cin>>b;
    cin>>op2;
    cin>>c;
    int res = 0;
    if(op1 == "+" && op2 == "-"){
        res = a+b-c;
    }else if(op1 == "-" && op2 == "+"){
        res = a-b+c;
    }else if(op1 == "-" && op2 =="-"){
        res = a-b-c;
    }else if(op1 == "+" && op2 == "+"){
        res = a+b+c;
    }else if(op1 == "/" && op2 == "*"){
        res = (a/b)*c;
    }else if(op1 == "*" && op2 == "/"){
        res = (a*b)/c;
    }else if(op1 == "*" && op2 =="*"){
        res = a*b*c;
    }else if(op1 == "/" && op2 == "/"){
        res = a/b/c;
    }
    cout<<res;

    return 0;
}
