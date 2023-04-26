#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Approch-1

    // vector<int> arr{1, 3, 4, 2, 2};

    // int ans = -1;

    // for (int i = 0; i < arr.size(); i++)
    // {

    //     int index = abs(arr[i]);

    //     if (arr[index] < 0)
    //     {
    //         ans = index;
    //         break;
    //     }

    //     arr[index] *= -1;
    // }

    // cout << ans << " ";
    // cout << endl;

    vector<int> arr{1, 3, 4, 2, 2};

    int c = 0;

    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[c] != arr[arr[c]])
        {
            swap(arr[c], arr[arr[c]]);
        }
    }

    cout << arr[c] << endl;

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    return 0;
}