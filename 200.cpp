#include <iostream>
#include <string>

using namespace std;

int main()
{
   int b1, b2, b3;
   cin>>b1>>b2>>b3;
   string odgovor = " ";
   int d = 200;
   
   if(b1 == d || b2 == d || b3 == d){
       odgovor = "DA";
   }else if(b1 != d || b2 != d||b3 != d){
       odgovor = "NE";
   }
   cout<<odgovor;

    return 0;
}
