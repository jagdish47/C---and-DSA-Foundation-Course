#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr)
{

    int n = arr.size();

    for (int i = 0; i < n; i++)
    {

        bool swapped = true;

        for (int j = 0; j < n - i - 1; j++)
        {
            swapped = false;

            if (arr[j] == 0)
            {
                swap(arr[j], arr[j + 1]);
            }
        }

        if (swapped)
        {
            break;
        }
    }
}

int main()
{

    vector<int> arr{5, 0, 1, 2, 0, 0, 4, 0, 3};
    bubbleSort(arr);

    for (int i = 0; i < arr.size(); i++)
    {

        cout << arr[i] << " ";
    }

    cout << endl;
}