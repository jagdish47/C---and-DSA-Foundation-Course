#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr{1, 5, 2, 2, 3, 3, 4};

    bool flag = true;

    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[i] <= arr[i + 1])
        {
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "Sorted" << endl;
    }
    else
    {
        cout << "Unsorted" << endl;
    }

    return 0;
}