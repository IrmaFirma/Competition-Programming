#include <iostream>


int main(){
	int n;
	int sum = 0;
	std::cin>>n;
	
	for(int i = 1; i<=n; i++){
		if(i % 5 == 0 || i % 3 == 0){
			sum = sum + i;
		}
	}
	std::cout<<sum;
}
