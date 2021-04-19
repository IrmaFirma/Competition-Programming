#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>

using namespace std;

int x[100010];

/*
    Zadatak:
    https://www.spoj.com/problems/AGGRCOW/
*/

int main()
{
    int t, c, n;
    cin >> t;
    while (t--) {
        cin >> n >> c;
        for (int i = 0; i < n; i++) {
            cin >> x[i]; /// unosimo pozicije krava
        }
        sort(x, x + n);
        int maxi = x[n - 1];

        int a = 1, b = maxi;
        int maksimalna_razlika = 1;

        while (a <= b) {
            int d = (a + b) / 2; /// probavamo srednju razliku iz intervala


            int pozicija_prosle_krave = x[0], koliko_krava = 1;
            for (int i = 1; i < n; i++) {
                if (x[i] - pozicija_prosle_krave >= d) {
                    koliko_krava++;
                    pozicija_prosle_krave = x[i];
                }
            }
            if (koliko_krava >= c) {
                maksimalna_razlika = max(maksimalna_razlika, d);
                a = d + 1;
            }
            else {
                b = d - 1;
            }
        }
        cout << maksimalna_razlika << endl;
    }


    return 0;
}
