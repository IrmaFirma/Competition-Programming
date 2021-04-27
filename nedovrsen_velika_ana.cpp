#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int
main ()
{

  int n;
  cin >> n;
  
  int rezultat = n/2;
  if(rezultat/2 > n){
      cout<<-1;
  }else{
      cout<<2<<" "<<rezultat;
  }


  return 0;
}
