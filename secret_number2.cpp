#include <iostream>

//TODO: Try again option
//TODO: Hint option
//TODO: Try with just while loop without do
//TODO: Random secret number generator

int main(){	
	int secret = 111;
	int guess = 0;
	int counter = 0;
	
	std::cout<<"Welcome to Secret Number Game! \n";
	std::cout<<"You have 10 tries to guess the number I am thinking about! \n";
	

	do{
		counter++;
		if(counter == 1){
			std::cout<<"Enter your guess: "; 
			std::cin>>guess;
		}else{
			std::cout<<"Ooops! Try "<<counter<<": "; 
			std::cin>>guess;
		} 
	}while(guess!=secret && counter < 10);{
		if(guess==secret && counter < 10){
			std::cout<<"Correct! The secret number is 777. \n";
			std::cout<<"You got it in "<<counter<<" tries. \n";
		}else if(guess!=secret && counter == 10){
			std::cout<<"Failed... \n";
		}
	}
}
