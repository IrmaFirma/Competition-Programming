#include <iostream>


int main(){
	int n;
	int result = 1;
	int result2 = 0;
	int choice;
	std::cin>>n;
	std::cin>>choice;
	
	for(int i = 1; i<=n; i++){
		if(choice == 1) result = result * i;
	}
	
	for(int i = 0; i<=n; i++){
		if(choice == 0) result2 = result2 + i;
		
	}

	if(choice == 1) std::cout<<"Product is: "<<result;
	else if(choice == 0) std::cout<<"Sum is: "<<result2;
	

}
