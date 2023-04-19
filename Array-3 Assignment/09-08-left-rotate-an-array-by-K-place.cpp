#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v{1, 2, 3, 4, 5, 6, 7};

    int d = 3;

    vector<int> temp;

    // putting data in temp array
    for (int i = 0; i < d; i++)
    {
        temp.push_back(v[i]);
    }

    // replacing the data
    for (int j = d; j < v.size(); j++)
    {
        v[j - d] = v[j];
    }

    // putting temp data to last
    for (int k = v.size() - d; k < v.size(); k++)
    {
        v[k] = temp[k - (v.size() - d)];
    }

    // Displaying Data

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}