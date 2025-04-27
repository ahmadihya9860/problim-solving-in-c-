#include <iostream>
using namespace std;

int main(){
    int mark_1,mark_2,mark_3,sum;
    cout<<"enter the mark one "<<endl;
    cin>>mark_1;

    cout<<"enter the mark tow "<<endl;
    cin>>mark_2;

    cout<<"enter the mark three "<<endl;
    cin>>mark_3;

    sum = (mark_1 + mark_2 + mark_3) / 3;

    if (sum >= 50)
    {
        /* code */
        cout<<"pass"<<endl;
    }

    else{
        cout<<"fait"<<endl;
    }
    




   
    return 0;
}