#include<iostream>
using namespace std;

int main(){

    int marks;
    cout<<"enter marks : ";
    cin>>marks;


    if(marks > 80){
        cout<<"A grade "<<endl;
    }
    else if(marks > 70){
        cout<<"B grade "<<endl;
    }

    else if(marks > 60) {
        cout<<"C grade" <<endl;
    }
    else if(marks > 36){
        cout<<"D grade" <<endl;
    }

    else {
        cout<<"Failed"<<endl;
    }
    return 0;
}