#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr{1, 1, 2, 2, 3, 3, 4};

    set<int> s;

    for (int i = 0; i < arr.size(); i++)
    {
        s.insert(arr[i]);
    }

    int index = 0;

    for (auto itr : s)
    {

        arr[index] = itr;
        index++;
    }

    for (int i = 0; i < s.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}