#include <bits/stdc++.h>
using namespace std;

int bubbleSort(vector<int> &arr)
{

    int count = 0;

    for (int i = 0; i < arr.size(); i++)
    {

        bool swapped = true;

        for (int j = 0; j < arr.size() - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {

                count++;
                swapped = false;
                swap(arr[j], arr[j + 1]);
            }
        }

        if (swapped)
        {
            break;
        }
    }

    return count;
}

int main()
{

    vector<int> arr{6, 5, 4, 3, 2, 1};

    int ans = bubbleSort(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Total Swapped Needed : " << ans << endl;

    return 0;
}