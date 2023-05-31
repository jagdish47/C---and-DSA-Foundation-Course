#include <bits/stdc++.h>
using namespace std;

void moveNegativeLast(vector<int> &vec)
{

    int start = 0;
    int end = vec.size() - 1;

    while (start <= end)
    {

        if (vec[end] < 0)
        {
            end--;
        }

        else if (vec[start] >= 0)
        {
            start++;
        }

        else
        {
            swap(vec[start], vec[end]);
        }
    }
}

int main()
{

    vector<int> vec{1, 2, -3, 4, -5, 6, 7, 0, 0, 4, 2, -2, 1};

    moveNegativeLast(vec);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    // METHOD-1 USING INBUILT FUNCTIONS

    // sort(vec.begin(), vec.end());
    // reverse(vec.begin(), vec.end());
    // for (int x : vec)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;

    return 0;
}