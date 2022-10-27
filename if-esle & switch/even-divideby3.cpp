#include<iostream>
using namespace std;

int main() {


    int num;
    cout<<"enter number : ";
    cin>>num;


    if((num % 2 == 0)  &&  (num % 3 == 0)){
        cout<<"value is : "<<num <<endl;
    }

    return 0;
}