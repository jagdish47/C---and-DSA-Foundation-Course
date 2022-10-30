// #include<iostream>
// using namespace std;

// int main() {

//     int m;
//     cout<<"enter m : ";
//     cin>>m;


//     for(int i = 1; i <= m; i++){

//         for(int j = 1; j <= m; j++){

//             if(i % 2 == 1){
//                   if(j % 2 == 1){
//                         cout<<1<<" ";
//                    }
//                   else{
//                         cout<<2<<" ";
//                     }
//              }
//              else{
//                 if(j % 2 == 1){
//                         cout<<2<<" ";
//                    }
//                   else{
//                         cout<<1<<" ";
//                     }
//              }
          
//         }

//         cout<<endl;
//     }

//     return 0;
// }



#include<iostream>
using namespace std;

int main() {

    int m;
    cout<<"enter m : ";
    cin>>m;


    for(int i = 1; i <= m; i++){

        for(int j = 1; j <= m; j++){

            if((i + j) % 2 == 0){
                cout<<"1"<<" ";
            }
            else{
                cout<<"2"<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}