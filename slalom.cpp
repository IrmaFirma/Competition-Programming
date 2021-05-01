#include <iostream>
#include <string>

using namespace std;

int main()
{
   int n, x;
   cin>>n>>x;
   int p[n];
   for(int i = 0; i<n; i++){
       cin>>p[i];
   }
  
   int res = p[0];
   for(int i = 0; i<n; i++){
       if(x-1 == i){
           res = p[i];
       }
   }
  cout<<res;

    return 0;
}
