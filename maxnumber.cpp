/******************************************************************************
Bilten 2018 prvi zadatak

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin>>x>>y;
    if(x>y) cout<<"max="<<x;
    else if(y>x) cout<<"max="<<y;
    else cout<<"Brojevi su jednaki.";

    return 0;
}
