#include <iostream>
using namespace std;

int main()
{
    int secret_num = 8;
    int your_quess;
    int counter = 1;
    cout<<"GUESS THE SECRET NUMBER GAME"<<endl;
    cout<<"Secret number is between 1-10. You have max. of 10 tries."<<endl;
    <<endl;
    cout<<"Enter guess Number "<<counter<<": ";
    cin>>your_quess;
    counter++;
    
    do{
        cout<<"Enter guess Number " <<counter<<": ";
        cin>>your_quess;
        counter++;
    }while(your_quess!=secret_num && counter<11);{
        if(your_quess==secret_num) cout<<"You won!";
        if(counter==11 && your_quess!=secret_num) cout<<"You lost!";
    }

    return 0;
}
