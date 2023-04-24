#include <bits/stdc++.h>
using namespace std;

void rowSum(int arr[][3])
{

    for (int i = 0; i < 3; i++)
    {

        int sum = 0;

        for (int j = 0; j < 3; j++)
        {

            sum += arr[j][i];
        }
        cout << sum << endl;
    }
}

int main()
{

    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    rowSum(arr);

    return 0;
}