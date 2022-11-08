// Rotate the given array by K steps where k is non negative
// note - K can be greater than n as well where n is the size of array

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int size = *(&arr + 1) - arr;

    int newArr[size];

    int k = 9;
    k =  k % size;

    int j = 0;
    for (int i = size - k; i < size; i++)
    {
        newArr[j++] = arr[i];
    }

    for (int i = 0; i <= k; i++)
    {
        newArr[j++] = arr[i];
    }


    for(int i = 0; i < size; i++){
        cout<<newArr[i]<<" ";
    }
}