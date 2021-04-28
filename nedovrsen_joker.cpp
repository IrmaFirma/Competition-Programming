#include <iostream>
#include <string>

using namespace std;

int
main ()
{

  int niz[7];
  for (int i = 0; i < 7; i++)
    {
      cin >> niz[i];
    }

  int s = 0;
  for (int i = 0; i < 6; i++)
    {
      int j = niz[i] % 10;	
      s = s + j;
    }

  cout << s << endl;


  return 0;
}
