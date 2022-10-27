#include<iostream>
using namespace std;

int main() {

    int age;
    cout<<"enter age : ";
    cin>>age;

    if(age < 12){
        cout<<"child"<<endl;
    }
    else if(age > 12 && age < 18){
        cout<<"teenager"<<endl;
    }

    else{
        cout<<"adult"<<endl;
    }

    return 0;
}