#include <iostream>
using namespace std;

int main()
{

    int arr[] = {10, 353, 64, 43, 35, 34, 464, 34, 34};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "size of array - " << size << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}