#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr{1, 1, 2, 2, 3, 3};

    int i = 0;

    for (int j = 1; j < arr.size(); j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }

    for (int l = 0; l < i + 1; l++)
    {
        cout << arr[l] << " ";
    }

    return 0;
}