// Given an integer array and its size, find the sum of the greatest and the smallest integer present
// in the array. Here 1< size <101


#include<iostream>
using namespace std;

int findMaximum(int arr[], int size){
    int min = arr[0];

    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    return min;
}

int findMinimum(int arr[], int size){
    int max = arr[0];

    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = *(&arr + 1) - arr;

    cout<<"Maximum is : "<<findMaximum(arr, size)<<endl;
    cout<<"Minimum is : "<<findMinimum(arr, size)<<endl;

    return 0;
}