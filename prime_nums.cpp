#include <iostream>
#include <cmath>


int main(){	
	int n;
	std::cin>>n;
	
	for(int i = 2; i<=n; i++){
		int ctr = 0;
		for(int j = 2; j<=sqrt(i); j++){
			if(i%j == 0) {
				ctr=1;
			}
		}
		if(ctr==0) std::cout<<i<<"\n";
	}
}
