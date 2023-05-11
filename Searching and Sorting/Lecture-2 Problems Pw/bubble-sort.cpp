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

            if (arr[j] > arr[j + 1])
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

    vector<int> arr{6, 5, 4, 3, 23, 2, 1};

    bubbleSort(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}