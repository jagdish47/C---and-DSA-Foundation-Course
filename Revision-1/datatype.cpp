#include<iostream>
using namespace std;


int main() {
    int number = 10;
    cout<<"integer : "<<number<<endl;
    cout<<"size : "<<sizeof(number)<<endl;

    float decimal = 10.5;
    cout<<"Float : "<<decimal<<endl;
    cout<<"size : "<<sizeof(decimal)<<endl;

    long bigger = 10000000;
    cout<<"Long : "<<bigger<<endl;
    cout<<"size : "<<sizeof(bigger)<<endl;


    double decimalBigger = 10;
    cout<<"Double : "<<decimalBigger<<endl;
    cout<<"size : "<<sizeof(decimalBigger)<<endl;

    char character = 'A';
    cout<<"Character : "<<character<<endl;
    cout<<"size : "<<sizeof(character)<<endl;

    bool Boolean = true;
    cout<<"Boolean : "<<Boolean<<endl;
    cout<<"size : "<<sizeof(Boolean)<<endl;
}