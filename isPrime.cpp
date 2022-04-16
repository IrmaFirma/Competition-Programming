#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    if(n==0 || n==1) return false;
    for(int i = 2; i<sqrt(n); i++){
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    bool isPrimeRes = isPrime(n);
    if(isPrimeRes){
        cout<<"Broj je prost.";
    }else{
        cout<<"Broj nije prost.";
    }

    return 0;
}
