#include<iostream>
using namespace std;


int main() {
    int arr[5];

    //taking input using for loop

    // for(int i = 0; i < 5; i++){
    //     cout<<"enter at "<< i << " : "; 
    //     cin>>arr[i];
    // }

    // taking input from foreach loop

    for(int &ele : arr){
        cin>>ele;
    }

    // printing
    for(int ele : arr){
        cout<<ele<<" ";
    }
}