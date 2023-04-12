#include <iostream>
using namespace std;

// here arr is address of arr or address of first element of array
void display(int arr[])
{

    // int size = sizeof(arr)/sizeof(arr[0]); because of using adress we can't use this it will generate warning or sometimes error also

    for (int i = 0; i < 6; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
}

void modify(int arr[])
{

    arr[0] = 200;
    arr[1] = 300;
}

int main()
{

    int arr[] = {54, 3, 4, 6, 7, 8};

    display(arr);
    modify(arr);
    display(arr);

    return 0;
}

// -whenever we are passing array to function we are passing the address of array so if we change in it. than original array will also modify
// -because they both are pointing to actual array