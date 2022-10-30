#include<iostream>
using namespace std;


int main() {

    int m;
    cout<<"enter value m : ";
    cin>>m;


    for(int i = 1; i <= m; i++){

        for(int j = 1; j <= m - i;  j++){

            cout<<"  ";
        }

        for(int j = 1; j <= (i * 2) - 1; j++){
           if(j==1 || i == m || j == (i * 2) - 1){
            cout<<"* ";
           }
           else{
            cout<<"  ";
           }
        }

        cout<<endl;
    }
}