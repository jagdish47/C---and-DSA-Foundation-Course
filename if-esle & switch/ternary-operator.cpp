#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"enter num : ";
    cin>>num;

    (num % 2 == 0) ? cout<<"even"<<endl : cout<<"odd"<<endl;

    return 0;
}