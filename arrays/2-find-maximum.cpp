#include<iostream>
using namespace std;


int main() {

    int arr[] = {3, 5, 6, 23, 5, 6, 3, 2, 6, 7, 10};
    int size = *(&arr + 1) - arr;

    int max = arr[0];

    // for(int i = 1; i < size; i++){
    //     if(arr[i] > max){
    //         max = arr[i];
    //     }
    // }


    //using foreach loop
    for(int ele : arr){
        if(ele > max){
            max = ele;
        }
    }

    cout<<max<<endl;

    return 0;
}