#include<iostream>
using namespace std;


int main(){
    
    // if you declaring array you have to give size and if you initialize than no need to write the size
    int arr[] = {10, 20, 30, 40, 50};

    // accessing value
    cout<<arr[0]<<endl;
    cout<<arr[2]<<endl;


    // redeclaring array element
    arr[0] = 5000;

    cout<<arr[0]<<endl;



    return 0;
}