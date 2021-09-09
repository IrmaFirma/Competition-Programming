#include <iostream>

int main(){
	
	int n;
	std::cin>>n;
	int b = n%10;
	int c = n/10;
	int d = n/100;
	std::cout<<b<<"\n";
	std::cout<<c%10<<"\n";
	std::cout<<d<<"\n";
	
	std::cout<<b+(c%10)+d;
	
	

}
