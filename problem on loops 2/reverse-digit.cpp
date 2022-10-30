#include<iostream>
using namespace std;


int main() {

    int n;
    cout<<"enter number : ";
    cin>>n;


    int lastDigit;
    int rev = 0;


    while(n > 0){
        lastDigit = n % 10;
        rev = rev * 10 + lastDigit;
        n = n / 10;
    }

    cout<<rev<<endl;

    return 0;
}