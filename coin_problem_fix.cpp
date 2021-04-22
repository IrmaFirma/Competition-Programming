/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int kusur, n;
int k[1010];
int memo[1010];
int coin(int c){
    if(memo[c] !=0) return memo[c];
    if(c==0) return 0;
    if(c<0) return 100000;
    
    
    int min_broj_kovanica = coin(c - k[0]) +1;
 
    for(int i = 1; i<n; i++){
        min_broj_kovanica = min(min_broj_kovanica, coin(c-k[i]) + 1);
    }
    memo[c] = min_broj_kovanica;
    return memo[c];
}
int main() {
    //Kusur je ukupan kusur, N je broj razlicith kovanica
    cin>>kusur;
    cin>>n; //niz u kojem se spremaju vrjednosti tih kovanica k
    for(int i = 0; i<n; i++){
        cin>>k[i];
    }
    
    cout<<coin(kusur)<<endl;
    return 0;
}
