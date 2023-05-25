#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int start, int end)
{

    if (start == end - 1)
    {
        return true;
    }

    if (arr[start] > arr[start + 1])
    {
        return false;
    }

    return isSorted(arr, start + 1, end);
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;

    cout << isSorted(arr, start, size) << endl;

    return 0;
}