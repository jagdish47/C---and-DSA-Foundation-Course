#include <iostream>
using namespace std;

int main()
{

    int n = 5;

    // METHOD-1

    // for (int i = 1; i <= n; i++)
    // {

    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }

    //     for (int k = 1; k <= i; k++)
    //     {
    //         cout << k << " ";
    //     }

    //     cout << endl;
    // }

    // METHOD-2 this wont work in all cases

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            if ((i + j) >= n + 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}