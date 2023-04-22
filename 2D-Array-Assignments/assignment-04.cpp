#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> mat{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < mat.size(); i++)
    {

        for (int j = 0; j < mat.size(); j++)
        {

            if (i == j)
            {
                cout << mat[i][j] << " ";
            }

            else if ((i + j) == mat.size() - 1)
            {
                cout << mat[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}