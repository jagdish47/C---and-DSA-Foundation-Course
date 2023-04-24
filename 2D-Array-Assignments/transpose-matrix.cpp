#include <bits/stdc++.h>
using namespace std;

void transposeMatrix(int arr[][3], int row, int col)
{

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            if (j < i && i == j)
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    // Displaying

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int arr[][3] = {{2, 4, 6}, {1, 3, 5}, {9, 11, 10}};

    transposeMatrix(arr, 3, 3);

    return 0;
}