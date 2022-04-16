#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	char recenica[256];
	int length = sizeof(recenica)/sizeof(recenica[0]);
	fgets(recenica, sizeof(recenica), stdin);
	int i = 0;
	
	while(recenica[i]){
	    if(recenica[i] == '.') cout<<"IZJAVNA.";
	    if(recenica[i] == '!') cout<<"UZVICNA.";
	    if(recenica[i] == '?') cout<<"UPITNA.";
	    i++;
	}
	
	
	
	return 0;
}
