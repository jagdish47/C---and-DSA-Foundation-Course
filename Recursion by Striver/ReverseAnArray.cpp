#include <bits/stdc++.h>
using namespace std;

void reverseArr(int arr[], int size, int start)
{

    if (start >= size)
    {
        return;
    }

    reverseArr(arr, size, start + 1);
    cout << arr[start] << " ";
}

int main()
{

    int arr[] = {9, 6, 4, 9, 2, 9, 4, 7, 1, 1, 1};
    int start = 0;
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArr(arr, size, start);
    cout << size << endl;

    return 0;
}