#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"enter number : ";
    cin>>num;


    int i = 1;
    int sum = 0;

    while(i <= num){
        sum+=i;
        i++;
    }

    cout<<sum<<endl;
    return 0;
}