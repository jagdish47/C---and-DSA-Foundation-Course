#include<iostream>
using namespace std;


int main() {

    int arr[] = {5, 33, 5, 67, 45};

    //total size of array (array taking size in memory)
    cout<<sizeof(arr)<<endl;


    // gettinglength of arry
    // it will give you 5 because there are total 5 elements in array
    cout<<sizeof(arr) / sizeof(arr[0])<<endl;



    return 0;
}