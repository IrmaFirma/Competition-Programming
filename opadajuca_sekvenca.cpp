#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>

using namespace std;

int a[1010], dp[1010];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];

    dp[0] = 1; /// nulta pozicija
    int najveciDp = 1;
    for( int i=1;i<n;i++ ){ /// bottom up approach
        dp[i] = 1;
        for( int j=0;j<i;j++ ){
            if( a[i] < a[j] )
                dp[i] = max( dp[j] + 1, dp[i] );
        }
        najveciDp = max( najveciDp, dp[i] );
       // if( dp[i]>najveciDp ) najeciDp=dp[i];
    } /// O(n^2)


    cout<<najveciDp <<endl;

    /// BONUS: Nalazimo koji to brojevi grade rjesenje

    int trenutno_trazimo = najveciDp, trenutni_broj = -1000000000;
        /// trenutni broj na pocetku stavimo na neki mali negativan broj, da bi se
        /// mogo apdejtovati kada prvi put naletimo na odgovarajuci dp
    vector<int> rjesenje;
   // int trenutni_broj =
    for( int i=n-1; i>=0;i-- ){
        if( dp[i] == trenutno_trazimo && a[i] > trenutni_broj ){
            trenutno_trazimo--;
            trenutni_broj = a[i];
            rjesenje.push_back( a[i] );
        }
    }

    for( int i=rjesenje.size()-1; i>=0; i-- ){
        cout << rjesenje[i] << " ";
    }
    cout<<endl;
  //  cout<<dp[n-1]<<endl; /// OVO JE NETACNO JER NAM OVO DAJE NAJVECI KOJI ZAVRSAVA NA N-1!
  /// A MOZE BITI DA NAJVECI ZAVRSAVA NA N-2, N-3,...

return 0;
}
