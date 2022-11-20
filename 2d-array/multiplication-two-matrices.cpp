#include <iostream>
using namespace std;

int main()
{
    int one[][2] = {
        {1, 2},
        {3, 4},
    };

    int two[][2] = {
        {5, 6},
        {7, 8},
    };

    int C[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int ans = 0;

            for (int k = 0; k < 2; k++)
            {
                ans += one[i][k] * two[k][j];
            }
            C[i][j] = ans;
        }
    }

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {

            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}