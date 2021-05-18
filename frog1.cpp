#include<bits/stdc++.h>
using namespace std;

int memo[100010],n,h[100010]; //memo, broj zaba i niz visina
bool izracunat[100010]; //niz izracunatih vrijednosti
 
int najmanjiUmor(int n){
    if( izracunat[n] == true )
        return memo[n]; //ako je trenutni broj vec izracunat return rjesenje

    izracunat[n]=true; 
	if(n==2){
	 memo[n]=abs(h[2]-h[1]);  //bazni slucaj ako je n = 2 jedino rjesenje je ovo
	 return memo[n];
    }
	if(n<=1) return 0; //ako je manje ili jednako 1 rjesenje je 0

	memo[n]=min( najmanjiUmor(n-1)+abs(h[n]-h[n-1]) , najmanjiUmor(n-2)+abs(h[n]-h[n-2])); //formula za izracunavanje
	return memo[n];
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>h[i];
	}
	cout<<najmanjiUmor(n)<<endl;
	return 0;
}

