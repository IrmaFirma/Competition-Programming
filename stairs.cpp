#include <iostream>

using namespace std;


int main()
{   
    int n;
    cin>>n;
    
    ///prvi red: n-1 praznih mjesta i 1 *
    ///drugi red: n-2 praznih mjesta i 2 *
    ///treci red: n-3 praznih mjesta i 3 *
    ///...
    /// k-ti red:n-k praznih mjesta i k *
    
    for(int red=1;red<=n;red++){
        for(int pozicija=1; pozicija<=n;pozicija++){
            if(pozicija<=n-red)cout<<' ';
            else cout<<"#";
        }
        cout<<endl;
    }
    
    return 0;
}
