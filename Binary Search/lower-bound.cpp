#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr, int x)
{

    int start = 0;
    int end = arr.size() - 1;

    int ans = -1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (x == arr[mid])
        {
            ans = mid;
        }

        if (arr[mid] < x)
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

    vector<int> arr = {1, 2, 4, 5, 9, 15, 18, 21, 24};
    int x = 3;

    cout << lowerBound(arr, x) << endl;

    return 0;
}