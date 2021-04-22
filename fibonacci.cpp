#include <iostream>

using namespace std;

int memo[10010]; //ovo je niz koji sprema prethodna rjesenja vec izracunatih stanja
int fibonacci(int n){ //unosimo broj n 
    if( memo[n] != 0 ) return memo[n];  //ako je trenutni broj n drugaciji od 0 return taj broj odnosno vrjednost funkcije ispod (*)
    if( n==1 || n==2 ) return memo[n]=1;  //ako je uneseno n jednako 1 ili 2 vrjednost funkcije * ce biti 1 

    memo[n] = fibonacci(n-1) + fibonacci(n-2); // * osnovna funkcija za iracunavanje vrjednosti fibonaccijevog niza
    return memo[n];
    
}

int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n); //pozivanje rekurzivne funkcije sa parametrom n

    return 0;
}
