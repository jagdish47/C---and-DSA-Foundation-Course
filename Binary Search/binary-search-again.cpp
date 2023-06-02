#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &vec, int target)
{

    int low = 0;
    int high = vec.size() - 1;

    while (low <= high)
    {

        int mid = low + (high - low) / 2;

        if (vec[mid] == target)
        {
            return mid;
        }

        else if (target > vec[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{

    vector<int> vec{3, 4, 6, 7, 9, 12, 16, 17};
    int target = 1;

    int ans = binarySearch(vec, target);

    cout << "answer is : ";
    cout << ans << endl;
}