#include<iostream>
using namespace std;

int main() {

    int m;
    cout<<"enter m : ";
    cin>>m;


    for(int i = 1; i <= m; i++){

        for(int j = 1; j <= (m + 1) - i; j++){

            cout<<j<<" ";
        }

        for(int k = 1; k <= i-1; k++){
            cout<<k<<" ";
        }

        cout<<endl;
    }

    return 0;
}


// 1 2 3 4 5 
// 1 2 3 4 1 
// 1 2 3 1 2 
// 1 2 1 2 3 
// 1 1 2 3 4