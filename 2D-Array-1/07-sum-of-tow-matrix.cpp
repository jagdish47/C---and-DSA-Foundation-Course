#include <bits/stdc++.h>
using namespace std;

int main()
{

    int one[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int two[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // The order of the both the matrix should be same otherwise adding matrix isn't possible
    int ans[3][3];

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            // ans[i][j] = one[i][j] + two[i][j];

            // if you only want to print the addition
            cout << one[i][j] + two[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            // cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}