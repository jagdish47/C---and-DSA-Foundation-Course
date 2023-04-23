#include <bits/stdc++.h>
using namespace std;

int main()
{

    // vector<vector<int>> mat(5, vector<int> 5);
    vector<vector<int>> mat;

    for (int i = 0; i < 5; i++)
    {

        vector<int> temp(i + 1, 1);

        for (int j = 1; j < i; j++)
        {

            temp[j] = mat[i - 1][j] + mat[i - 1][j - 1];
        }
        mat.push_back(temp);
    }

    // Displaying the data

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