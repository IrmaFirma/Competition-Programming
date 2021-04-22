#include <iostream>
using namespace std;


int m, n; //dvije input varijable m i n (m pocetna vrjednost i n krajnja)
int recursive_sum(int m, int n){ //nasa rekurzivna funkcija za pronalazak sume izmedju m i n
    
    if(m==n) return m; //bazni slucaj za break iz funkcije
    //ako je stanje m nakon racunanja jednako krajnjem slucaju n racunanje je zavrseno return vrjednost m cija je vrjednost ispod *

    
    return m + (recursive_sum(m+1, n));  //vrjednost m 
    
}

int main() {
    
    cin>>m>>n;
    cout<<recursive_sum(m,n);
    //npr m = 2 i n = 4  
    // 2 + 3 + 4 nakon sto je dostignuta vrjednost krajnje varijable break
    //saberemo vrjednosti i dobijemo sumu 

    return 0;
}
