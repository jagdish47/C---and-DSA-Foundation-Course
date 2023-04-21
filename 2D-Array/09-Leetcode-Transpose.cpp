#include <bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>> &matrix)
{

    int row = matrix.size();
    int col = matrix[0].size();

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            cout << i << " " << j;
        }

        cout << endl;
    }
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}};

    transpose(arr);
    return 0;
}