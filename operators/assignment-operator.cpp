#include<iostream>
using namespace std;

int main(){

    int a = 10;

    a += 10; 
    cout<<a<<endl; //now a is 20

    a -= 10;
    cout<<a<<endl; //now a is 10 again

    a *= 5;
    cout<<a<<endl; //now a is 50

    a /= 2;
    cout<<a<<endl;//now a is 24

    a %= 3;
    cout<<a<<endl;//now a is 1

    // at the end a is holding 1 

    return 0;
}