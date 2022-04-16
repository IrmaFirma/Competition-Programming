#include <iostream>
using namespace std;

const int Nmax = 10000001;
int s[Nmax];

void partial_sums(int a[8], int n){
	s[1] = a[1];
	for(int i = 2; i<=n; i++){
		s[i] = s[i-1] + a[i];
	}
}

long long query(int x, int y){
	return s[y] - s[x-1];
}


int main(){
	
	int n = 8;
	int a[n] = {7, 2, 3, 9, 11, 5, 1, -3};
	
	partial_sums(a, n);
	query(2, 6);
	
	return 0;
}
