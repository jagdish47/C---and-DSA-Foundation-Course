// find the sum of given digits

#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"enter number : ";
    cin>>n;


    int sum = 0;

    while(n > 0) {

        int lastDigit = n % 10;

        sum += lastDigit;

        n /= 10;

    }

    cout<<sum<<endl;

    return 0;
}