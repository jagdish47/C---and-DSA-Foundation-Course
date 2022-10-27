#include<iostream>
using namespace std;

int main() {


    int num;
    cout<<"enter number : ";
    cin>>num;


    if((num % 3 == 0)  ||  (num % 5 == 0)){
        cout<<"value is : "<<num <<endl;
    }

    return 0;
}