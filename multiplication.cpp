#include <iostream>


int main(){
	int n = 1;
	for(int i = 1; i<=10 && n<=1; i++){
			std::cout<<n<<" * "<<i<<" = "<<n*i<<"\n";
	}
	for(int i = 0; i<=11 && n<=13; i++){
		n++;
		for(int i = 1; i<=10 && n<=12; i++){
			std::cout<<n<<" * "<<i<<" = "<<n*i<<"\n";
		}
	}
}
