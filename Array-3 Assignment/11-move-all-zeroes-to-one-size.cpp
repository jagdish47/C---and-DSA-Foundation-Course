#include <bits/stdc++.h>
using namespace std;

void moveAllZeroes(vector<int> arr, int n)
{

    int low = 0;
    int high = n - 1;

    while (low < high)
    {

        if (arr[low] != 0)
        {
            low++;
        }

        if (arr[high] == 0)
        {
            high--;
        }

        if (arr[low] == 0 && arr[high] != 0)
        {
            int temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;

            low++;
            high--;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    vector<int> arr{1, 0, 2, 3, 2, 0, 0, 4, 5, 1};

    moveAllZeroes(arr, arr.size());

    return 0;
}