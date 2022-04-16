#include<bits/stdc++.h>
using namespace std;

int main()
{
    char recenica[256];
	int length = sizeof(recenica)/sizeof(recenica[0]);
	fgets(recenica, sizeof(recenica), stdin);
	
	int i = 0, br=0;
	while(recenica[i]){
	    if(recenica[i] == 'R' || recenica[i] == 'r') br++;
	    
	    i++;
	}
	
	cout<<br;

	return 0;
}
