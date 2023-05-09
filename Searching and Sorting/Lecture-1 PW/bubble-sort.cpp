#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr)
{

    for (int i = 0; i < arr.size(); i++)
    {

        bool swapped = true;

        for (int j = 0; j < arr.size() - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swapped = false;

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
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

    vector<int> arr{5, 1, 4, 3, 2};

    bubbleSort(arr);

    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}