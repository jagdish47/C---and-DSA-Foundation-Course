#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[4][4] = {{1, 2, 3, 4}, {43, 3, 3, 3}, {45, 45, 43, 23}, {9, 7, 6, 5}};

    int target = 23;

    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 4; j++)
        {

            if (arr[i][j] == target)
            {

                cout << i << " " << endl;
            }
        }
    }

    return 0;
}