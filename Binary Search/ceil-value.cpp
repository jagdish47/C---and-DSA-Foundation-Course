#include <bits/stdc++.h>
using namespace std;

int floorBinarySearch(vector<int> &arr, int target)
{

    int start = 0;
    int end = arr.size() - 1;

    int ans = -1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (arr[mid] >= target)
        {
            ans = arr[mid];
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{

    vector<int> arr{4, 5, 7, 9, 11, 17, 20};

    int target = 10;

    int ans = floorBinarySearch(arr, target);

    cout << ans << endl;

    return 0;
}