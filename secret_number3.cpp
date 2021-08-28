#include <iostream>
#include <cstdlib>

int main(){	
	int secret = rand() % 101;
	int guess = 0;
	int counter = 0;

	std::cout<<"Welcome to Secret Number Game! \n";
	std::cout<<"You have 10 tries to guess the number between 0 and 100 I am thinking about! \n";
	
	
	while(guess!=secret && counter < 10){
		counter++;
		if(counter == 1){
			std::cout<<"Enter your guess: "; 
			std::cin>>guess;
		}else{
			std::cout<<"Ooops! Try "<<counter<<": "; 
			std::cin>>guess;
		} 
	
	}
	
	if(guess==secret && counter < 10){
		std::cout<<"Correct! \n";
		std::cout<<"You got it in "<<counter<<" tries. \n";
	}else if(guess!=secret && counter == 10){
		std::cout<<"Failed... \n";
	}

}
