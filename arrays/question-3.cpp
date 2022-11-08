// Find the unique number in a given array where all the number elements are being repeated twice with one value being unique.

#include<iostream>
using namespace std;

int main() {

    int arr[] = {2, 3, 1, 3, 2, 4, 4, 5, 1};
    int size = *(&arr + 1) - arr;

    int ans = -1;

    for(int i = 0; i < size; i++){
        int count = 0;


        for(int j= i+1; j < size; j++){

            if(arr[i] == arr[j]){
                count++;
                arr[j] = -1; 
                break;
            }

        }

        if(count == 0 && arr[i] != -1){
            ans = arr[i];
          
        }
    }


    cout<<ans<<endl;


    return 0;
}