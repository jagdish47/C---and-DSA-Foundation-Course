#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> mat{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < mat.size(); i++)
    {

        if (i % 2 == 1)
        {

            for (int j = 0; j < mat.size(); j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int j = mat.size() - 1; j >= 0; j--)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}