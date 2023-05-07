#include <bits/stdc++.h>
using namespace std;

int binarySearchIn2dMatrix(vector<vector<int>> arr, int target)
{

    int rows = arr.size();
    int cols = arr[0].size();

    int start = 0;
    int end = rows * cols - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        int rowIndex = mid / cols;
        int colIndex = mid % cols;

        if (arr[rowIndex][colIndex] == target)
        {
            return mid;
        }
        if (arr[rowIndex][colIndex] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    vector<vector<int>> vec{{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 50}, {50, 60, 70, 80}};
    int target = 30;

    int ans = binarySearchIn2dMatrix(vec, target);

    cout << ans;
    cout << endl;

    return 0;
}