#include <bits/stdc++.h>
using namespace std;

void arrayTraverse(int arr[], int start, int end)
{

    if (start > end - 1)
    {
        return;
    }

    cout << arr[start] << " ";

    arrayTraverse(arr, start + 1, end);
}

int main()
{

    int arr[] = {3, 4343, 434, 3, 4, 34, 3, 4, 3, 43, 43};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;

    // cout << size << endl;

    arrayTraverse(arr, start, size);

    return 0;
}