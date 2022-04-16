#include <iostream>
using namespace std;

const int Nmax = 100001;
bool isPrime[Nmax];

void sieve(int n){
    for(int i = 2; i<=n; i++){
        isPrime[i]=true;
    }

    for(int i = 2; i<=n/2; i++){
        if(isPrime[i]){
            for(int j=i*2; j<=n; j+=i){
                isPrime[j] = false;
            }
        }
    }

}

int main(){
    sieve(100);
    for(int i = 1; i<=100; i++){
        if(isPrime[i]) cout<<i<<" ";
    }
    return 0;
}
