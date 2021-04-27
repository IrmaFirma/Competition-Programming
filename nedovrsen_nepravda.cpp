#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int
main ()
{
  int n, broj_upita;
  int l, r;			//lijeva i desna granica upita
  int k, m = 0;
  long s = 0;
  cin >> n >> broj_upita;

  int niz[n];
  vector < pair < int, int >>upiti;

  for (int i = 0; i < n; i++)
    {
      cin >> niz[i];
    }

  for (int i = 0; i < broj_upita; i++)
    {
      cin >> l >> r;
      upiti.push_back (
			{
			l, r});	// vektor parova l i r indeksa upita
    }


  for (k = l; k < r; k++)
    {
      m = r - l;
      s = s + pow (2, m) * niz[k];
    }

  cout << s << endl;

  return 0;
}
