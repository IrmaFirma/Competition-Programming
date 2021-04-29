#include <iostream>
#include <string>

using namespace std;

int
main ()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    int p;
    cin>>p;
    int trazeni = 0;
    
    for(int i = 0; i<n; i++){
        if(a[0] == 0) trazeni = 1;
        else if(a[0] == 1) trazeni = 2;
        }
        
    cout<<trazeni;

  return 0;
}
