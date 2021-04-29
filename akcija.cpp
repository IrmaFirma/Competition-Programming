#include<iostream>
using namespace std;

int main()
{

        int arr[50], size, i, k, sum=0, sum2=0, sum3=0, count=0;
        cin>>size;
        cin>>k;

        for(i=0; i<size; i++)
        {
                cin>>arr[i];
        }

       int min = arr[0];

        for(i=0; i<k-1; i++)
        {
            if(arr[i] < min) min = arr[i];
                if(arr[i]==min)
                {
                        for(int j=i; j<(k-1); j++)
                        {
                                arr[j]=arr[j+1];
                                sum+=arr[j];
                        }
                        count++;
                        break;
                }
        }
        for(i = k; i<size; i++){
            sum2+=arr[i];
        }
        sum3 = sum + sum2;
        if(count!=0)
        {
                cout<<"\nNow the new array is:\n";
                for(i=0; i<(k-1); i++)
                {
                        cout<<arr[i]<<" ";
                }
        }
        cout<<endl;
        cout<<"SUMA NOVOG NIZA: ";
        cout<<sum<<endl;
        cout<<"SUMA OD K NIZA: ";
        cout<<sum2<<endl;
        cout<<"SUMA UKUPNA: ";
        cout<<sum3;

        return 0;
}
