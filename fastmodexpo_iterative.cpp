
///fast mod expo O(log n) iterative way
#include <iostream>
using namespace std;

int fastExpo(int a, long long n, int myNum){
    ///(a^n) % myNum
    int ans = 1;
    while(n>=1){
        if(n%2==0){
            a = (1LL * a * a) % myNum;
            n/=2;
        }else{
            ans = (1LL * ans * a) % myNum;
            n--;
        }
    }
    return ans;

}

int main(){

    cout<<fastExpo(2, 10, 1000000007);
    return 0;
}
