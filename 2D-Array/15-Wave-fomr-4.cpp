#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> mat{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < mat.size(); i++)
    {

        if (i % 2 == 0)
        {
            for (int j = 0; j < mat.size(); j++)
            {
                cout << mat[j][i] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int k = mat.size() - 1; k >= 0; k--)
            {
                cout << mat[k][i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}