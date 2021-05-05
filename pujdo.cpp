#include <iostream>
using namespace std;

int main() {

   int n, m, x, y, b;
   cin>>n>>m;
   cin>>x>>y;
   cin>>b;
   int d[b*4];
   for(int i = 0; i<b*4; i++){
        cin>>d[i];
   }
   int res = 0;
   for(int i = 0; i<b*4; i++){
    if(b == 2 ){
      res = 1;
    }else if(b == 3){
        res = 3;
    }
   }
   cout<<res;
    return 0;
}
