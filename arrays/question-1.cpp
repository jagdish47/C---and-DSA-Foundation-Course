// Fint the total number of pairs in the array whose sum is equal to the given value x.

#include<iostream>
using namespace std;

int numberOfPair(int arr[], int size, int x){
    int count = 0;


    for(int i = 0; i < size; i++){

        for(int j = i+1; j < size; j++){

            if(arr[i] + arr[j] == x){
                count++;
            }
        }
    }

    return count;
}

int main() {

    int arr[] = {3, 4, 6, 7, 1};
    int x = 7;
    int size = *(&arr + 1) - arr;

    cout<<numberOfPair(arr, size, x)<<endl;
    return 0;
}