#include <bits/stdc++.h>
#include <cstring> //for memset function
using namespace std;

int main()
{

    int arr[5] = {5}; //[0,0,0,0,0]

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // int arr[5]; //-461078328 32747 -461078904 32747 -461080256

    // memset(arr, 0, sizeof(arr));

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // return 0;

    // Another Example of memeset

    // int arr[5];
    // memset(arr, 42, sizeof(arr)); // set all elements of arr to 42
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << ' ';
    // }
    // cout << '\n';
    // return 0;
}

// Syntax : -
// void* memset(void* ptr, int value, size_t num);
