// Count the number of triplets whose sum is equal to the given value x.

#include<iostream>
using namespace std;

int main() {

    
    int arr[] = {3, 1, 2, 4, 0, 6};
    int size = *(&arr + 1) - arr;
    int k = 5;

    int count = 0;


    for(int i = 0; i < size; i++){

        for(int j = i+1; j < size; j++){

            for(int k = j+1; k < size; k++){

                if(arr[i]+arr[j]+arr[k] == k){
                    count++;
                }
            }
        }
    }

    cout<<endl<<count<<endl;
}