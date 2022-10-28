#include<iostream>
using namespace std;

int main() {

    int m;
    cout<<"enter m : ";
    cin>>m;


    for(int i = 1; i <= m; i++){

        for(int j = i; j <= m; j++){

            cout<<j<<" ";
        }

        for(int k = 1; k <= i-1; k++){
            cout<<k<<" ";
        }

        cout<<endl;
    }

    return 0;
}

// 1 2 3 4 5 6 7 
// 2 3 4 5 6 7 1 
// 3 4 5 6 7 1 2 
// 4 5 6 7 1 2 3 
// 5 6 7 1 2 3 4 
// 6 7 1 2 3 4 5 
// 7 1 2 3 4 5 6