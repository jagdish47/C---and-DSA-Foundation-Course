#include <bits/stdc++.h>
using namespace std;

int binarySearchRecursive(vector<int> &arr, int target, int low, int high)
{

    if (low >= high)
    {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (target == arr[mid])
    {
        return mid;
    }

    if (target > arr[mid])
    {
        return binarySearchRecursive(arr, target, mid + 1, high);
    }
    else
    {
        return binarySearchRecursive(arr, target, low, mid - 1);
    }
}

int main()
{

    vector<int> arr{3, 4, 6, 7, 9, 12, 16, 17};
    int target = 12;
    int low = 0;
    int high = arr.size() - 1;

    int ans = binarySearchRecursive(arr, target, low, high);
    cout << ans << endl;
}