#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr)
{

    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {

        int min = INT_MAX;
        int temp = -1;
        for (int j = i; j < n; j++)
        {

            if (arr[j] < min)
            {
                min = arr[j];
                temp = j;
            }
        }

        swap(arr[i], arr[temp]);
    }
}

int main()
{

    vector<int> arr{5, 4, 3, 6, 3, 4, 6};
    selectionSort(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}