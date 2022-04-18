/******************************************************************************
 Bilten 2018 II zadatak pet

*******************************************************************************/
#include <iostream>
using namespace std;
 
int main()
{
    int n, m, jeProst, br=0;
    cin>>n>>m;

    for (int i = n-m; i <= m+n; i++) {
        jeProst = 1;
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                jeProst = 0;
                break;
            }
        }
        if (jeProst == 1) br++;
    }
 
    cout<<br;
    return 0;
}
