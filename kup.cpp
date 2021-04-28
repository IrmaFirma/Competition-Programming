#include <iostream>
using namespace std;

int
main ()
{
  int rez[4];
  for (int i = 0; i < 4; i++)
    {
      cin >> rez[i];
    }

  int junak = rez[0] + rez[3];
  int segesta = rez[1] + rez[2];

  cout << junak << " " << segesta << endl;
  if (junak && segesta != 0)
    {
      if (junak > segesta)
	cout << "Junak";
      else if (junak < segesta)
	cout << "Segesta";
      else if (rez[0] == rez[2] && rez[1] == rez[3])
	cout << "Jedanaesterci";
      else if (junak == segesta && rez[0] > rez[3])
	cout << "Segesta";
      else if (junak == segesta && rez[1] > rez[2])
	cout << "Junak";
    }

  return 0;
}
