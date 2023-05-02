#include <bits/stdc++.h>
using namespace std;

int firstOccuranceOfElement(vector<int> arr, int tar, int start, int end)
{

    int ans = -1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (arr[mid] == tar)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > tar)
        {
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

    vector<int> v{1, 3, 4, 4, 4, 4, 4, 6, 7, 9};
    int target = 4;
    int start = 0;
    int end = v.size() - 1;

    int ans = firstOccuranceOfElement(v, target, start, end);
    cout << ans << endl;

    return 0;
}