// Find the second largest element from the array

#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 7, 9, 3, 15, 11, 8, 15, 15};
    int size = *(&arr + 1) - arr;

    int max = -1;
    int index = 0;

    for(int i = 0; i < size; i++){

        if(arr[i] > max){
            max = arr[i];
            index = i;
        }
    }

    
    // arr[index] = -1; we do this only we have unique values but what if we have duplicate values

    for(int i = 0; i < size; i++){
        if(arr[i] == max){
            arr[i] = -1;
        }
    }


    int secondMax = -23443434;

    for(int i = 0; i < size; i++){
        if(arr[i] > secondMax){
            secondMax = arr[i];
        }
        
    }

    cout<<"second maximum element is : "<<secondMax<<endl;

    

   
}