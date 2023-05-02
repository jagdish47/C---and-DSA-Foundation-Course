#include <bits/stdc++.h>
using namespace std;

int firstOccurance(vector<int> arr, int target)
{

    int ans = -1;

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

int lastOccurance(vector<int> arr, int target)
{

    int ans = -1;

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (target > arr[mid])
        {
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

    vector<int> arr{1, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 6, 7, 8};
    int target = 4;

    int first = firstOccurance(arr, target);
    int second = lastOccurance(arr, target);

    int totalOccurance = (second - first) + 1;

    cout << "Total Occurance is : " << totalOccurance << endl;

    return 0;
}