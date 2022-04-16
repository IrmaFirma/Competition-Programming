///fast mod expo O(log n) recursive way
#include <iostream>
using namespace std;

int fastExpo(int a, long long n, int myNum){

    /// (a^n) % myNum
    /// corner case if n==0
    if(n==0) return 1;

    if(n%2==0){
        return fastExpo((1LL * a * a) % myNum, n/2, myNum);

    return (1LL * a * fastExpo(a, n-1, myNum)) % myNum;

}

int main(){
    cout<<fastExpo(5, 13, 10000007);
    return 0;
}
