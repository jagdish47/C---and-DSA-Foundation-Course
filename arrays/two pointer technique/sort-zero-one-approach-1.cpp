#include<iostream>
using namespace std;


int main() {

    int arr[] = {1, 1, 0, 0, 1, 0, 1, 0};
    int size = *(&arr + 1) - arr;

    int sorted[size];

    int start = 0;
    int end = size - 1;

    for(int i = 0; i < size; i++){

        if(arr[i] == 1){
            sorted[start] = arr[i];
            start++;
        }

        else if(arr[i] == 0){
            sorted[end] = arr[i];
            end--;
        }
    }

    for(int ele : sorted){
        cout<<ele<<" ";
    }

    return 0;
}