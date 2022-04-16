#include <iostream>
using namespace std;

const int Nmax = 1000001;
int f_array(Nmax);

void findNumber(int n){
    int current_remainder = 0;
    for(int i = 1; i<=n; i++){
        current_remainder = (current_remainder*10+1) % n;
        if(current_remainder==0){
            for(int j = 1; j<=i; j++){
                cout<<1;
            }
            return;
        }
        if(f_array[current_remainder] != 0){
            for(int j = 1; j<=i-f_array[current_remainder]; j++){
                cout<<1;
            }
            for(int j = 1; j<=f_array(current_remainder); j++){
                cout<<0;
            }
            return;
        }
        f_array[current_remainder] = i;
    }

}

int main(){



    return 0;
}
