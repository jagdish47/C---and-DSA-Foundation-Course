#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> vec{1, 0, 1, 2, 0, 1, 0, 2, 1};

    // METHOD-3 IN_PLACE 3-POINTER

    int l = 0, m = 0;
    int h = vec.size() - 1;

    while (m <= h)
    {

        if (vec[m] == 0)
        {
            swap(vec[m], vec[l]);
            l++;
            m++;
        }

        else if (vec[m] == 1)
        {
            m++;
        }
        else
        {
            swap(vec[m], vec[h]);
            h--;
        }
    }

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    // METHOD-2
    //  int zero = 0;
    //  int one = 0;
    //  int two = 0;

    // for (int i = 0; i < vec.size(); i++)
    // {

    //     if (vec[i] == 0)
    //     {
    //         zero++;
    //     }

    //     else if (vec[i] == 1)
    //     {
    //         one++;
    //     }
    //     else
    //     {
    //         two++;
    //     }
    // }

    // while (zero > 0)
    // {
    //     cout << 0 << " ";
    //     zero--;
    // }
    // while (one > 0)
    // {
    //     cout << 1 << " ";
    //     one--;
    // }
    // while (two > 0)
    // {
    //     cout << 2 << " ";
    //     two--;
    // }
    // cout << endl;

    // METHOT-1
    // sort(arr.begin(), arr.end());
    // for (auto x : arr)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;

    return 0;
}