#include <iostream>
using namespace std;

int main()
{

    int arr[] = {50, 22, 64, 23, 45};

    cout << arr << endl;
    cout << &arr << endl;
    cout << &arr[0] << endl;

    // actually above 3 statements are same the will print first elements address in memory

    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;
    cout << &arr[4] << endl;

    // 0x7ffc5acfb070
    // 0x7ffc5acfb074
    // 0x7ffc5acfb078
    // 0x7ffc5acfb07c
    // 0x7ffc5acfb080

    // Printing their address we knew that array is contigious memeory allocation. all box will be contiguios in memory

    int arr[5];
    // if we write this statement 5 size of memory will reserved inside memory.

    return 0;
}