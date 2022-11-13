#include<iostream>
using namespace std;

int main() {

    int arr[] = {5, 4, 1, 2, 3, 4};
    int size = *(&arr + 1) - arr;


    for(int i = 1; i < size; i++){
        ;
        arr[i] = arr[i-1] + arr[i];
    }

    for(int ele : arr){
        cout<<ele<<" ";
    }

    return 0;
}