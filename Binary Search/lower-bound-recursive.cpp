#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &arr, int target, int start, int end, int &ans)
{

    if (start >= end)
    {
        return ans;
    }

    int mid = start + (start + end) / 2;

    if (arr[mid] >= target)
    {
        return lowerBound(arr, target, start, mid - 1, mid);
    }
    else
    {
        return lowerBound(arr, target, mid + 1, end, ans);
    }
}

int main()
{

    vector<int> arr{1, 2, 3, 3, 7, 8, 9, 9, 9, 11};

    int target = 8;
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;

    lowerBound(arr, target, start, end, ans);

    cout << ans << endl;

    return 0;
}