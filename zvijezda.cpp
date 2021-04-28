

#include <iostream>

using namespace std;

int
main ()
{
  int t;
  cin >> t;
  if (t >= 29727)
    cout << "O";
  else if (9727 <= t && t < 29727)
    cout << "B";
  else if (7227 <= t && t < 9727)
    cout << "A";
  else if (5727 <= t && t < 7227)
    cout << "F";
  else if (4927 <= t && t < 5727)
    cout << "G";
  else if (3427 <= t && t < 4927)
    cout << "K";
  else if (2127 <= t && t < 3427)
    cout << "M";

  return 0;
}
