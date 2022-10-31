#include<iostream>
using namespace std;
int add(int a, int b); //this is called function prototype

int main() {

    cout<<add(10, 40)<<endl;
    return 0;
}


int add(int a, int b){
    return a + b;
}