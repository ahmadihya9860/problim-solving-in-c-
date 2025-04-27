#include <iostream>
using namespace std;

int main(){
    int age;
    string draiver_license;


    cout<<"pleas enter your age  :"<<endl;
    cin>>age;
    cout<<"do you have draiver license (yes , no)"<<endl;
    cin>>draiver_license;

    if (age > 21 && draiver_license=="yes")
    {
        /* code */
        cout<<"hired"<<endl;

    }

    else
    {
        cout<<"rejected"<<endl;
    }
    
    


    return 0;
}
