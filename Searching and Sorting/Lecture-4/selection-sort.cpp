#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr)
{

    for (int i = 0; i < arr.size() - 1; i++)
    {

        int min_idx = i;

        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        swap(arr[i], arr[min_idx]);
    }
}

int main()
{

    vector<int> arr{65, 5, 5, 5, 5, 3, 54, 2, 45, 35, 3, 7, 87, 5, 7, 64};

    selectionSort(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}