
#include <iostream>
using namespace std;

const int Nmax = 100007;

bool permutacija(int niz1[6], int niz2[6]) {
    int length = 6;
    for (int i = 0; i < length; i++) {
        if (niz1[i] != niz2[length - i - 1]) {
            return false;
        }
    }
    return true;
}

int main()
{
    int niz1[6] =  { 1, 2, 3, 4, 5, 6 };
    int niz2[6] =  { 6, 5, 4, 3, 2, 1 };
    permutacija(niz1, niz2);
    
    if (permutacija(niz1, niz2)) {
        cout<<true;
    } else {
        cout<<false;
    }

    return 0;
}
