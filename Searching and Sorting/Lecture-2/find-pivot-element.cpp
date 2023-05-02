#include <bits/stdc++.h>
using namespace std;

int findPivotElement(vector<int> arr)
{

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        if (arr[mid - 1] > arr[mid])
        {
            return mid - 1;
        }

        if (arr[start] > arr[mid])
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

    vector<int> arr{3, 4, 5, 6, 7, 1, 2};
    int ans = findPivotElement(arr);
    cout << "Pivot Element is : " << ans << endl;

    return 0;
}