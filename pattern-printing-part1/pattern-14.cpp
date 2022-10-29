#include<iostream>
using namespace std;

int main() {

    int m;
    cout<<"enter m : ";
    cin>>m;


    for(int i = 1; i <= m; i++){

        for(int j = 1; j <= m - i; j++){
            cout<<"  ";
        }

        for(int k = 1;  k <= (2* i) - 1; k++){
            cout<<k<<" ";
        }

    cout<<endl;

    }

}