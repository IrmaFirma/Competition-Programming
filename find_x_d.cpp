#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;//broj clanova niza
	int num,first,last,mid;
	cin>>n;//unos 
	int niz[30];
	for(int i = 0; i<n; i++){
		cin>>niz[i]; //unos clanova niza
	}
	for(int i=0;i<n;i++)
	{		
		for(int j=i+1;j<n;j++)
		{
			if(niz[i]>niz[j])
			{
				int temp = niz[i];
				niz[i]=niz[j];
				niz[j]=temp;
			}
		}
	}
	cin>>num; //broj koji trazimo
	first = 0;
	last = n - 1;
	mid = (first+last)/2;
	while(first<=last){
		if(niz[mid]<num){
			first = mid + 1;
		}else if(niz[mid]== num){
			cout<<"Nadjen na poziciji: "<<endl;
			cout<<mid-1<<endl;
			break;
		}else{
			last = mid + 1;
		}
		mid = (first+last)/2;
	}
	if(first>last){
		cout<<-1;
	}
	return 0;
}
