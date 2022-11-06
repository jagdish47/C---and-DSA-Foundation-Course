// Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such
// that they belong to different arrays and are not at the same index. Here 1<size<101

#include<iostream>
using namespace std;

int main() {

    int a[]={5,6,10,4,9};
    int b[]={1,2,3,4,5};
    int n = 5;

    int max = 65654;

    for(int i = 0; i < 5; i++){


        for(int j = 0; j < 5; j++){

            if(a[i] + b[j] < max){
                max = a[i] + b[j];
            }
        }
    }
    


    return 0;
}