#include <bits/stdc++.h>
using namespace std;

int binarySearchSortedRotated(vector<int> arr, int target)
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

        if (arr[start] <= arr[mid])
        {

            if (arr[start] <= target && target <= arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= target && target <= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{

    vector<int> vec{7, 8, 9, 1, 2, 3, 4, 5, 6};
    int target = 4;

    int ans = binarySearchSortedRotated(vec, target);

    cout << ans << endl;

    return 0;
}