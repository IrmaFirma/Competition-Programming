#include <iostream>

using namespace std;

int main()
{
   int r, s, k, d, v;
   cin>>r;
   cin>>s;
   cin>>k;
   cin>>d;
   cin>>v;
   
   int rezultat = (r*s)*k -(d+v);
   
   cout<<rezultat;
   
   return 0;
}
