// Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n) (inclusive of
// both 0 and n). Find and return the only number of the range that is not present in the array. Here 1<n<101.

#include<iostream>
using namespace std;

int main(){
    int arr[] = {0, 1, 3};
    int n = 3;

    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    int natural = n * (n + 1) / 2;

    int missing = natural - sum;

    cout<<missing<<endl;

    return 0;
}