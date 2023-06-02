#include <bits/stdc++.h>
using namespace std;

int findingLowerBound(vector<int> &arr, int target)
{

    int ans = -1;

    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {

        int mid = low + (high - low) / 2;

        if (arr[mid] >= target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = low + 1;
        }
    }

    return ans;
}

int main()
{

    vector<int> arr{1, 2, 3, 3, 7, 8, 9, 9, 9, 11};
    int target = 11;

    int ans = findingLowerBound(arr, target);

    cout << ans << endl;

    return 0;
}