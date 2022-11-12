#include<iostream>
using namespace std;


int main() {

    int a, b, c;
    cout<<"enter 3 number : ";
    cin>>a>>b>>c;

    if(a > b){
        if(a > c){
            cout<<a <<" is greater"<<endl;
        }else{
            cout<<a <<" is second greter"<<endl;
        }
    }

    if(b > a){
        if(b > c){
            cout<<b <<" is greter"<<endl;
        }
        else{
            cout<<b<<" is second greater"<<endl;
        }

    }
    if(c > a){
        if(c > b){
            cout<<c <<" is greter"<<endl;
        }
        else{
            cout<<c<<" is second greater"<<endl;
        }

    }


    return 0;
}