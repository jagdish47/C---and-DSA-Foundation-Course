#include <bits/stdc++.h>
using namespace std;

void descendingBubbleSort(vector<int> &arr)
{

    int n = arr.size();

    for (int i = 0; i < n; i++)
    {

        bool swapped = true;

        for (int j = 0; j < n - i - 1; j++)
        {

            if (arr[j] < arr[j + 1])
            {
                swapped = false;
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

    vector<int> arr{22, 45, 34, 4, 23};
    descendingBubbleSort(arr);

    for (int i = 0; i < arr.size(); i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}