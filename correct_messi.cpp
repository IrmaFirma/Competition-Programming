/// kod uzet sa https://www.geeksforgeeks.org/greedy-algorithm-to-find-minimum-number-of-coins/
#include <bits/stdc++.h>
using namespace std;

/// moguce novcanice

int kalorije[110];
int n,c;

void findMin(int C)
{

    // Polazimo od najvece cokolade
    int ukupnoKalorija=0;
    int brojCokolada = 0;
    for (int i = n - 1; i >= 0; i--) {

        // Koristimo trenutnu novcanicu koliko god mozemo
        if (C >= kalorije[i]) {
            C -= kalorije[i];
            ukupnoKalorija+=kalorije[i];
            brojCokolada++;
        }
    }


    cout<<ukupnoKalorija<<endl;
    cout<<brojCokolada<<endl;
}


int main()
{

    cin>>n;
    for(int i=0;i<n;i++) cin>>kalorije[i];
    cin>>c;

    sort( kalorije, kalorije+n );

    findMin(c);

    return 0;
}
