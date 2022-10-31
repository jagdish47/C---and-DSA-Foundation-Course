#include<iostream>
using namespace std;

int addition(int a, int b) {
    int sum = a + b;
    return sum;
    // return a + b;
}


int addition(int a, int b, int c) {
    int sum = a + b + c;
    return sum;
    // return a + b;
}


float addition(float a, float b) {
    float sum = a + b;
    return sum;
    // return a + b;
}

int main() {

    cout<<addition(10, 20)<<endl;
    cout<<addition(10, 20, 30)<<endl;
    cout<<addition(10.5, 20.2)<<endl;

    return 0;
}