#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> vec;

    int index = 3;

    for (int i = 0; i < 5; i++)
    {

        vector<int> v(i + 1, 1);

        for (int j = 1; j < i; j++)
        {

            v[j] = vec[i - 1][j] + vec[i - 1][j - 1];
        }

        vec.push_back(v);
    }

    for (int i = 0; i < vec.size(); i++)
    {

        for (int j = 0; j < vec[i].size(); j++)
        {

            // cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    cout << vec[2][2];

    return 0;
}