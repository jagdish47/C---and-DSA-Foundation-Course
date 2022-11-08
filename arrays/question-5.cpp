// Find the second largest element another approach


#include<iostream>
using namespace std;

int findMaxi(int arr[], int size){

    int max = INT8_MIN;

    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}

int main(){

    int arr[] = {1, 2, 3, 44, 5, 11, 2, 3, 11, 34, 44, 44, 2, 44};
    int size = *(&arr + 1) - arr;

    int max = findMaxi(arr, size);

    int secondMax = INT8_MIN;

    for(int i = 0; i < size; i++){

        if(arr[i] > secondMax && max != arr[i]){
            secondMax = arr[i];
        }
    }

    cout<<secondMax<<endl;

    return 0;
}