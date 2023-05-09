#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr)
{

    for (int i = 1; i < arr.size(); i++)
    {

        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}

int main()
{

    vector<int> arr{6, 5, 4, 3, 2, 1};
    insertionSort(arr);

    for (int i = 0; i < arr.size(); i++)
    {

        cout << arr[i] << " ";
    }

    return 0;
}
