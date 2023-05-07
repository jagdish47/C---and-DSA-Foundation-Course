#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr)
{

    int n = arr.size();

    for (int i = 0; i < n; i++)
    {

        int j = i;

        while (j > 0 && arr[j - 1] > arr[j])
        {

            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}

int main()
{

    vector<int> arr{7, 6, 5, 4, 3, 2, 1};

    insertionSort(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
