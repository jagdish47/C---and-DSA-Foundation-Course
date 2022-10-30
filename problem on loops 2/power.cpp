#include<iostream>
using namespace std;

int main() {

    int a, b;

    cout<<"enter a(base) and b(power) : ";
    cin>>a>>b;


    int sum = 1;

    for(int i = 1; i <= b; i++){
        sum *= a;
    }

    cout<<sum<<endl;

    return 0;
}