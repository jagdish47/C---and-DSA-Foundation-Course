#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[3][3] = {10, 1, 2, 3, 4, 1, 2, 3, 4};

    int mini = INT_MAX;

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            if (arr[i][j] < mini)
            {
                mini = arr[i][j];
            }
        }
    }

    cout << "Minimum is : " << mini << endl;

    return 0;
}