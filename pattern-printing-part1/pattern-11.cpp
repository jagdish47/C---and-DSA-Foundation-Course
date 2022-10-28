#include<iostream>
using namespace std;

int main() {

int m;
cout<<"enter m : ";
cin>>m;

for(int i = 1; i <= m; i++){

    for(int j = 1; j <= m; j++){

        if(i == 1 || i == m || j == 1 || j == m){
            cout<<j<<" ";
        }else{
            cout<<"  ";
        }
    }
    cout<<endl;
}

    return 0;
}