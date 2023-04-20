#include <bits/stdc++.h>
using namespace std;

void ToAddTwoMatrices(vector<vector<int>> mat1, vector<vector<int>> mat2)
{

    vector<vector<int>> result(mat1.size(), vector<int>(mat1.size()));

    for (int i = 0; i < mat1.size(); i++)
    {

        for (int j = 0; j < mat1.size(); j++)
        {

            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    for (int i = 0; i < result.size(); i++)
    {

        for (int j = 0; j < result.size(); j++)
        {

            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    vector<vector<int>> mat1{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> mat2{{4, 5, 8}, {0, 0, 8}, {1, 2, 0}};

    // vector<vector<int>> result = ToAddTwoMatrices(mat1, mat2);
    ToAddTwoMatrices(mat1, mat2);

    // cout << result[0].size() << endl;

    // for (int i = 0; i < result.size(); i++)
    // {

    //     for (int j = 0; j < result.size(); j++)
    //     {

    //         cout << result[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}