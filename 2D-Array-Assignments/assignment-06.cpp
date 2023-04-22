#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> mat{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Transpose the Matrix
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat.size(); j++)
        {

            if (i < j)
            {
                swap(mat[i][j], mat[j][i]);
            }
        }
    }

    for (int i = 0; i < mat.size(); i++)
    {

        for (int j = 0; j < mat.size() / 2; j++)
        {
            swap(mat[j][i], mat[mat.size() - j - 1][i]);
        }
    }

    // Displaying

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat.size(); j++)
        {

            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}