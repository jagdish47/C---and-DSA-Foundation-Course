#include<iostream>
using namespace std;

int main(){

    int m, n;
    cout<<"enter m and n : ";
    cin>>m>>n;


    for(int i = 1; i <= m; i++){

        for(int j = 1; j <=i; j++){

            cout<<"* ";
        }

        cout<<endl;
    }
}