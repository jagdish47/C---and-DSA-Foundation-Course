#include <bits/stdc++.h>
using namespace std;

int firstOccurance(vector<int> &arr, int target)
{

    int start = 0;
    int end = arr.size();
    int ans = -1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int lastOccurance(vector<int> &arr, int target)
{

    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

int main()
{

    vector<int> arr{4, 5, 7, 8, 8, 8, 8, 8, 12, 34, 44, 67};

    int target = 8;

    int ans = firstOccurance(arr, target);
    int ans1 = lastOccurance(arr, target);
    cout << "First Occurance : " << ans << endl;
    cout << "Last Occurance : " << ans1 << endl;
    return 0;
}