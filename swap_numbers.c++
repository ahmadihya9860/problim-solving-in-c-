#include <iostream>
using namespace std;

int main(){
    int number_1 , number_2 , swap;

    cout<<"enter the number one"<<endl;
    cin>>number_1;
    
    cout<<"enter the number tow"<<endl;
    cin>>number_2;
    
    cout<<"_____________________________"<<endl;
    cout<<number_1<<endl;
    cout<<number_2<<endl;

    cout<<"_____________________________"<<endl;
    swap = number_1;
    number_1 = number_2;
    number_2 = swap;

    cout<<"swaping ......"<<endl;
    cout<<number_1<<endl;
    cout<<number_2<<endl;



    return 0;
}