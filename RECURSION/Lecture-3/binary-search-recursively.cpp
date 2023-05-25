#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int start, int end, int &target)
{

    if (start > end)
    {
        return -1;
    }

    int mid = start + (end - start) / 2;

    if (target == arr[mid])
    {
        return mid;
    }

    if (arr[mid] > target)
    {
        // cout << "go left : " << target << "   " << arr[mid] << endl;
        return binarySearch(arr, start, mid - 1, target);
    }
    else
    {
        // cout << "go right : " << target << "  " << arr[mid] << endl;

        return binarySearch(arr, mid + 1, end, target);
    }
}

int main()
{

    vector<int> arr = {4, 7, 9, 14, 18, 26, 33, 56, 78, 89};

    int start = 0;
    int end = arr.size();
    int target = 78;

    int ans = binarySearch(arr, start, end, target);

    cout << ans << endl;

    return 0;
}