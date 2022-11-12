#include<iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9};
    int size = *(&arr + 1) - arr;

    int startPtr = 0;
    int endPtr = size - 1;

    while(startPtr < endPtr){

        if(arr[startPtr] % 2 == 0 && arr[endPtr] % 2 == 1){
            startPtr++;
        }
        else if(arr[startPtr] % 2 == 1 && arr[endPtr] % 2 == 1){
            endPtr--;
        }
        else if(arr[startPtr] % 2 == 1 && arr[endPtr] % 2 == 0){
            swap(arr[startPtr], arr[endPtr]);
            startPtr++;
            endPtr--;
        } 

    }


    for(int ele : arr){
        cout<<ele<<" ";
    }


    return 0;
}