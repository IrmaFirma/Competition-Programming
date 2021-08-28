#include <iostream>


int max_num(int n, int list[100]){
	
	int max = list[0];
	for(int i = 0; i<n; i++){
		if(list[i]>max) max = list[i];
	}
	
	return max;
}


int main(){
	
	int list[100];
	int n;
	std::cin>>n;
	
	for(int i = 0; i<n; i++){
		std::cin>>list[i];
	}
	
	std::cout<<max_num(n, list);

}
