#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N = 3;

    int arr1[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int arr2[N][N] = {
        {1, 4, 7},
        {2, 5, 8},
        {3, 6, 9}};

    int arr3[N][N];

    // Multiplication Logic of Two Matrix
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            arr3[i][j] = 0;

            for (int k = 0; k < N; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Printing Multiplication Matrix.
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}