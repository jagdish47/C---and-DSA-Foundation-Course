#include<iostream>
using namespace std;


int main() {

    int arr[] = {100, 200, 500, 560, 400};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<"using for loop"<<endl;

    for(int i = 0; i < size; i++){
        cout<<arr[i] <<endl;
    }

    cout<<"using for each loop"<<endl;

    for(int ele : arr){
        cout<<ele<<endl;
    }

    cout<<"using while loop"<<endl;


    int j = 0; 
    while(j < size){
        cout<<arr[j]<<endl;
        j++;
    }


    

    return 0;
}