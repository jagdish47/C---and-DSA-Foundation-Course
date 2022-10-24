#include<iostream>
using namespace std;

int main() {

    int a = 8;
    int b = 2;


    cout<<a + b<<endl;  //10
    cout<<b + a<<endl; //10

    cout<<a - b<<endl; //6
    cout<<b - a<<endl; //-6

    cout<<a * b<<endl; //16
    cout<<b * a<<endl; //16

    cout<<a/b<<endl; //4
    cout<<b/a<<endl; //0

    cout<<a % b<<endl; //0
    cout<<b % a<<endl; //2


    cout<<a + b - a * b / a<<endl; //8

    // Arithmetic Operators Precedence in C++
    // Left to Right
    // 1 = (), [], ++, --
    // 2 = *, /, %
    // 3 = +, -

    return 0;
}