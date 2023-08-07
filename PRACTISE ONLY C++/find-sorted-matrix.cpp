#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> matrix = {{1, 4, 7, 11}, {2, 5, 8, 12}, {3, 6, 9, 16}, {10, 13, 14, 17}};

    int rows = matrix.size();
    int cols = matrix.size();

    int row = 0;
    int col = cols - 1;

    int target = 5;

    while (row < rows && col >= 0)
    {

        if (matrix[row][col] == target)
        {
            return true;
        }
        else if (matrix[row][col] < target)
        {
            row++;
        }
        else
        {
            col--;
        }
    }

    return false;

    return 0;
}