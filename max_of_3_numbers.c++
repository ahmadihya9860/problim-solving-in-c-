#include <iostream>
using namespace std;

int main(){
    int number_1 , number_2 , number_3;

    cout<<"enter the number one "<<endl;
    cin>>number_1;

    cout<<"enter the number tow "<<endl;
    cin>>number_2;

    cout<<"enter the number three "<<endl;
    cin>>number_3;

    if (number_1 > number_2 && number_1 > number_3)
    {
        /* code */
        cout<<"the max accordingly is :"<<number_1<<endl;
    }

    else if (number_2 > number_1 && number_2 > number_3)
    {
        /* code */
        cout<<"the max accordingly is :"<<number_2<<endl;
    }

    if (number_3 > number_1 && number_3 > number_2)
    {
        /* code */
        cout<<"the max accordingly is :"<<number_3<<endl;
    }
    



    return 0;
}