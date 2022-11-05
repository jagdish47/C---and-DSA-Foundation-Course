#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int key){

    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return i+1;
        }
    }

    return -1;
}

int main() {

    int arr[] = {1, 2, 4, 5, 11, 76, 3, 2, 334};
    int size = *(&arr + 1) - arr;
    int key = 2;


    // int ans = linearSearch(arr, size, key);
    // cout<<ans<<endl;


    int ans = -1;

    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            ans = i;
        }
    }

    cout<<ans<<endl;


    return 0;
}