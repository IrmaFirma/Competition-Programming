#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int left = 0, right = (int)1e9;
    while (left != right) {
        int mid = (left + right + 1) / 2; /// binarnom pretragom trazimo najvecu visinu ograde

        long long cnt = 0;
        for (auto it : v) { /// sad prolazimo kroz niz visina, i gledamo koliko 'ogradica' visine barem mid
            cnt += it / mid;    /// mozemo dobiti
        }
        if (cnt >= k) { /// ukoliko ukupno ima bar k 'ogradica' koje su >= mid, nasli smo rjesenje
            left = mid;
        } else {
            right = mid - 1;
        }
    }
    cout << left << endl;
}
