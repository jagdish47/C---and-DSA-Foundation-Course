#include <bits/stdc++.h>
using namespace std;

int main()
{

    int mat[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    int n = 4;
    int m = 4;

    int top = 0;
    int left = 0;
    int right = m - 1;
    int bottom = n - 1;

    int i = 1;

    while (i <= (n * m))
    {
        for (int i = left; i <= right; i++)
        {
            cout << mat[top][i] << " ";
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            cout << mat[i][right] << " ";
        }

        right--;

        for (int i = right; i >= left; i--)
        {
            cout << mat[bottom][i] << " ";
        }

        bottom--;

        for (int i = bottom; i >= top; i--)
        {
            cout << mat[i][left] << " ";
        }

        left++;

        i++;
    }

    cout << endl;

    return 0;
}

// -------Leetcode(54)---------
// class Solution
// {
// public:
//     vector<int> spiralOrder(vector<vector<int>> &matrix)
//     {

//         int n = matrix.size();
//         int m = matrix[0].size();

//         int left = 0;
//         int top = 0;
//         int bottom = n - 1;
//         int right = m - 1;

//         int count = 0;

//         int totalEle = n * m;

//         vector<int> ans;

//         while (top <= bottom && left <= right)
//         {

//             for (int i = left; i <= right && count < totalEle; i++)
//             {
//                 ans.push_back(matrix[top][i]);
//                 count++;
//             }
//             top++;

//             for (int i = top; i <= bottom && count < totalEle; i++)
//             {
//                 ans.push_back(matrix[i][right]);
//                 count++;
//             }
//             right--;

//             for (int i = right; i >= left && count < totalEle; i--)
//             {
//                 ans.push_back(matrix[bottom][i]);
//                 count++;
//             }
//             bottom--;

//             for (int i = bottom; i >= top && count < totalEle; i--)
//             {
//                 ans.push_back(matrix[i][left]);
//                 count++;
//             }
//             left++;
//         }
//         return ans;
//     }
// };