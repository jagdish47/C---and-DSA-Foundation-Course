#include <iostream>
using namespace std;

void printArray(int *arr, int start, int end)
{
    if (start == end)
    {
        return;
    }

    cout << arr[start] << " ";

    printArray(arr, start + 1, end);

    if (start == end - 1)
    {
        cout << endl;
    }

    cout << arr[start] << " ";
}

int main()
{

    int arr[] = {4, 54, 56, 34, 2, 5, 7, 10};
    int start = 0;
    int end = *(&arr + 1) - arr;

    printArray(arr, start, end);

    return 0;
}