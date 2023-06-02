#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int target)
{

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (target == arr[mid])
        {
            return mid;
        }

        if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{

    vector<int> arr{4, 7, 7, 9, 10, 34, 66, 100};
    int target = 9;
    cout << binarySearch(arr, target) << endl;

    return 0;
}