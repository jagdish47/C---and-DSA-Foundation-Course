#include <bits/stdc++.h>
using namespace std;

int oddOccuringElement(vector<int> arr)
{

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        // if we have only single element inside array.
        if (start == end)
        {
            return mid;
        }

        if (mid % 2 == 0)
        {

            if (arr[mid] == arr[mid + 1])
            {
                start = mid + 2;
            }
            else
            {
                end = mid;
            }
        }
        else
        {

            if (arr[mid] == arr[mid - 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main()
{

    vector<int> arr{1, 1, 2, 2, 3, 3, 4, 4, 3, 600, 600, 4, 4};

    int ans = oddOccuringElement(arr);

    cout << "index : " << ans << " "
         << "element : " << arr[ans] << endl;

    return 0;
}