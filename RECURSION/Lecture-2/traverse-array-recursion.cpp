#include <bits/stdc++.h>
using namespace std;

void traverseArray(int arr[], int size)
{

    if (size < 0)
    {
        return;
    }

    traverseArray(arr, size - 1);
    cout << arr[size] << " ";
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;

    traverseArray(arr, size);

    return 0;
}