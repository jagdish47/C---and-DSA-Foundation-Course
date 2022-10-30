#include<iostream>
using namespace std;

int main() {

    int m;
    cout<<"enter m : ";
    cin>>m;


    for(int i = 1; i <= m; i++){

        for(int j = 1; j <= (m -i); j++){
            cout<<"  ";
        }

        for(int k = 1; k <= i; k++){
            cout<<k<<" ";
        }

        for(int l = (i-1); l >= 1; l-- ){
            cout<<l<<" ";
        }

        cout<<endl;
    }

    return 0;
}


//           1 
//       1 2 1 
//     1 2 3 2 1 
//   1 2 3 4 3 2 1 
// 1 2 3 4 5 4 3 2 1 