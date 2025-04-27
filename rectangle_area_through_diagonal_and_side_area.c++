#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a , d,sum;

    cout<<"enter a"<<endl;
    cin>>a;



    cout<<"enter d"<<endl;
    cin>>d;

    sum = (d * d) - (a * a);

    cout<<a * sqrt(sum) <<endl;



    return 0;
}