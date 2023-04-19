#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> vec{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    for (int i = 0; i < vec.size(); i++)
    {

        for (int j = i + 1; j < vec.size(); j++)
        {

            swap(vec[i][j], vec[j][i]);
        }
    }

    for (int i = 0; i < vec.size(); i++)
    {

        for (int j = 0; j < vec.size(); j++)
        {

            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}