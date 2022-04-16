#include <iostream>
using namespace std;

int len, f[100], expo[100];

void prime_fact(int n){
    if(n==1) {
        len = 1;
        f[len] = 1;
        expo[len] = 1;
    }
    int d = 2;
    while(1LL * d * d <= n && n>1){
        int k=0;
        while(n%d==0){
            k++;
            n/=d;
        }
        if(k>0){
            len++;
            f[len] = d;
            expo[len] = k;
        }
        d++;
    }
    if(n>1){
        len++;
        f[len] = n;
        expo[len] = 1;
    }

}

int main()
{
    prime_fact(1);
    for(int i = 1; i<=len; i++){
        cout<<f[i]<<" "<<expo[i]<<endl;
    }
    return 0;
}
