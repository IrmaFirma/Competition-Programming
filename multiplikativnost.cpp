//napisati program koji racuna i ispisuje multiplikativnu otpornost unesenog broja
//primjer: 336 izlaz 3
#include <iostream>
using namespace std;

int divide(int n){
	int c, p = 1;
	while(n>0){
		c=n%10;
		p=p*c;
		n=n/10;
	}
	
	return p;
}

int main(){
	int br, i=0, n1;
	cin>>br;
	if(br<10) i++;
	n1 = br;
	while(br>9){
		br = divide(br);
		i++;
	}
	cout<<"Rezultat za broj "<<n1<<" je "<<i<<endl;
	return 0;
}
