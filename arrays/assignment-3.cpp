// Given an integer array and its size, reverse the array and print it . Here 1<size<101

#include<iostream>
using namespace std;

int main(){

    int arr[] = {5, 4, 3, 2, 1};
    int size = *(&arr + 1)- arr;

    for(int i = 0; i < size / 2; i++){
        int last = size - i - 1;

        swap(arr[i], arr[last]);
    }


    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}