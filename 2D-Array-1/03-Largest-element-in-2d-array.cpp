#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[3][3] = {34, 32, 23, 23, 34, 54, 3, 2};
    int maxi = arr[0][0];

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
        }
    }

    cout << "Maximum is : " << maxi << endl;

    return 0;
}