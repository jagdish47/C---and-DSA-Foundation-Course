#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr{1, 2, 4, 2, 3};

    // AMAZING METHOD NO NEED TO CREATE ANOTHER ARRAY. MODIFYING THE SAME ARRAY

    int ans = -1;

    for (int i = 0; i < arr.size(); i++)
    {
        int index = abs(arr[i]);

        if (arr[index] < 0)
        {
            ans = index;
        }

        arr[index] *= -1;
    }

    cout << ans << endl;

    // SORT IT AND APROACH IT.
    // sort(vec.begin(), vec.end());

    // for (int i = 0; i < vec.size() - 1; i++)
    // {

    //     if (vec[i] == vec[i + 1])
    //     {
    //         cout << vec[i] << endl;
    //         break;
    //     }
    // }

    // NAIVE APPROACH TO HANDLE THIS PROBLEM
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     int count = 0;
    //     for (int j = i; j < vec.size(); j++)
    //     {
    //         if (vec[i] == vec[j])
    //         {
    //             count++;
    //         }
    //     }
    //     if (count >= 2)
    //     {
    //         cout << vec[i] << endl;
    //     }
    // }

    return 0;
}