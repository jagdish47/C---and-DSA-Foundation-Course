#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[3][4] = {{1, 21, 12, 3}, {5, 6, 7, 8}, {56, 7, 3, 22}};

    // Traversing a 2D array

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}