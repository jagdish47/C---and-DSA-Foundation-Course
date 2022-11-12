#include<iostream>
using namespace std;

int main() {

    int arr[] = {1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 1, 0};
    int size = *(&arr + 1) - arr;

    int start = 0;
    int end = size - 1;

    while(start < end){

        if(arr[start] == 1 && arr[end] == 0){
            start++;
            end--;
        }

        else if(arr[start] == 1 && arr[end] == 1){
            start++;
        }

        else if(arr[start] == 0 && arr[end] == 1){
            swap(arr[start], arr[end]);
            start++;
            end++;
        }
        else{
            end--;
        }
    }

    for(int ele : arr){
        cout<<ele<<" ";
    }
}