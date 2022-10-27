#include<iostream>
using namespace std;

int main() {

    int age;
    cout<<"enter age : ";
    cin>>age;

    if(age < 12){
        cout<<"child"<<endl;
    }
    else if(age > 18 && age < 60){
        cout<<"adult"<<endl;
    }

    else if(age > 60){
        cout<<"senior citizen"<<endl;
    }

    else{
        cout<<"teenager"<<endl;
    }

    return 0;
}