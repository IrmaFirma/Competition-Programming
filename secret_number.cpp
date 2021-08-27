#include <iostream>
#include <cmath>


int main(){	
	int secret = 777;
	int guess = 0;
	
	std::cout<<"Guess the secret number! \n";
	std::cout<<"Your guess: ";
	std::cin>>guess;
	
	do{
		std::cout<<"Ooops! Your guess: ";
		std::cin>>guess;
	}while(guess!=secret);{
		std::cout<<"Correct! The secret number is 777! \n";
	}
}
