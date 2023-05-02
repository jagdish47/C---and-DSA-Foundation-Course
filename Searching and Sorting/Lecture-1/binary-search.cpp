#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int target, int start, int end)
{

    while (start <= end)
    {

        int mid = (start + end) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return -1;
}

int main()
{

    vector<int> arr{2, 4, 7, 10, 15, 19, 21};
    int start = 0;
    int end = arr.size() - 1;
    int target = 2;

    int ans = binarySearch(arr, target, start, end);
    cout << ans << endl;

    return 0;
}