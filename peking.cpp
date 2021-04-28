#include <iostream>

using namespace std;

int
main ()
{
  int k;
  cin >> k;
  if (k <= 50)
    cout << "dobra kvaliteta zraka";
  else if (50 < k && k <= 100)
    cout << "umjerena kvaliteta zraka";
  else if (100 < k && k <= 150)
    cout << "zrak nezdrav za osjetljive grupe";
  else if (150 < k && k <= 200)
    cout << "nezdrav zrak";
  else if (200 < k && k <= 300)
    cout << "vrlo nezdrav zrak";
  else if (300 < k && k <= 500)
    cout << "opasan zrak";

  return 0;
}
