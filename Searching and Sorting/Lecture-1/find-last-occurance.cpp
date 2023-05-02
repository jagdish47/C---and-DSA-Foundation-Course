#include <bits/stdc++.h>
using namespace std;

int findLastOccurance(vector<int> arr, int target, int start, int end)
{

    int ans = -1;

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
    vector<int> vec{2, 5, 7, 7, 7, 7, 7, 7, 6, 9};
    int start = 0;
    int end = vec.size() - 1;
    int target = 7;

    int ans = findLastOccurance(vec, target, start, end);

    cout << ans << endl;

    return 0;
}