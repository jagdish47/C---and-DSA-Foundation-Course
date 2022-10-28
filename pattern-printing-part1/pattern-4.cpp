#include<iostream>
using namespace std;

int main() {

    int m, n;
    cout<<"enter m and n : ";
    cin>>m>>n;


    for(int i = 1; i <= m; i++){

        for(int j = n; j > 0; j--){

            if(i == 1 || i == m || i == j){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }

        cout<<endl;
    }

    return 0;
}


// * * * * * 
//         *   
//     *     
//  *       
// * * * * * * 


