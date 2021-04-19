#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>

using namespace std;

int a[100];

/*
    Zadatak:
    1.	Dat je niz cjielih brojeva. Niz treba sortirati tako da parni dodju prije neparnih.
        Pored toga, parni brojevi treba da su sortirani u rastucem poretku, a neparni u opadajucem.
*/

bool cmp(int x, int y)
{
    if ((x % 2) != (y % 2)) {
        if (x % 2 == 0) return true;
        else return false;
    }
    else {
        if (x % 2 == 0) return x < y;
        else return x > y;
    }

}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)cin >> a[i];
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)cout << a[i] << " ";
    cout << endl;

    return 0;
}


