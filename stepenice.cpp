#include <iostream>
using namespace std;

int memo[10010];
int stepenice(int n){
    if(memo[n] != 0) return memo[n]; // ako trenutna trazena stepenica nije nula return rezultat memo *
    if(n == 1) return 1; // ako je trazena stepenica 1 return 1 jer postoji samo jedan nacin za dolazak
    if(n == 2) return 2; // ako je trazena stepenica 2 return 2 jer postoje 2 nacina za dolazak 
    if(n == 3) return 4; //ako je trazena stepenica 3 return 4 jer postoje 4 nacina za dolazak
    
    memo[n] = stepenice(n - 1) + stepenice(n-2) + stepenice(n-3); //* 
    return memo[n];
    
}
int main() {
     int n;
     cin>>n;
     cout<<stepenice(n);

    return 0;
}
