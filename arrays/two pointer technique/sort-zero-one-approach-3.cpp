#include<iostream>
using namespace std;

int main() {

    int arr[] = {1, 1, 0, 0, 1, 0, 1, 0};
    int size = *(&arr + 1) - arr;


    int count = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            count++;
        }
    }


    int i = 0;

    while(i < size){

        if(i < count){
            cout<<0<<" ";
        }
        else{
            cout<<1<<" ";
        }
        i++;

    }


    return 0;
}