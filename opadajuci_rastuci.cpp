#include <iostream>

using namespace std;

int main() {
    //unos duzine niza i clanove niza
    int size;
    cin >> size;
    int brojevi[size];
    int i;
    int j;
    int m;

    for (i = 0; i < size; i++) {
        cin >> brojevi[i];
    }


    //sort rastuci
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (brojevi[i] > brojevi[j]) {
                m = brojevi[i];
                brojevi[i] = brojevi[j];
                brojevi[j] = m;
            }
        }
    }

    cout << "Rastuci sortiranje";
    for (i = 0; i < size; i++) {
        cout << brojevi[i] << " ";
    }

    int sizee;
    cin >> sizee;
    int brojevii[sizee];

    for (i = 0; i < sizee; i++) {
        cin >> brojevii[i];
    }

    for (i = 0; i < sizee - 1; i++) {
        for (j = i + 1; j < sizee; j++) {
            if (brojevii[i] < brojevii[j]) {
                m = brojevii[i];
                brojevii[i] = brojevii[j];
                brojevii[j] = m;
            }
        }
    }
    cout << "Opadajuci sortiranje" << endl;
    for (i = 0; i < sizee; i++) {
        cout << brojevii[i] << " ";
    }


    return 0;
}
