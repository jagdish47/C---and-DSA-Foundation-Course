#include <bits/stdc++.h>
using namespace std;

int peakElementInMountainArray(vector<int> arr)
{

    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {

        int mid = start + (end - start) / 2;

        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }

    return start;
}

int main()
{

    vector<int> arr{0, 10, 5, 2};

    int ans = peakElementInMountainArray(arr);
    cout << ans << endl;
    return 0;
}