#include <iostream>
#include <string>
using namespace std;


int fakt(int n){

    if(n==1) return 1;
    return fakt(n-1)*n;

}
int main() {


//factorial // faktorijel
    int f = 1;
    int c = 0;
    int n;
    cin>>n;
    for(int i = 0; i<=n; i++){
        f *= i;
        c++;
    }
}
