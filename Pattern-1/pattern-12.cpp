#include <iostream>
using namespace std;

int main()
{

    int n = 5;

    // METHOD-1
    // int a = 5;

    // for (int i = 0; i < n; i++)
    // {
    //     if (i % 2 == 0)
    //         a = 0;
    //     else
    //         a = 1;

    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << a << " ";
    //         if (a == 0)
    //             a = 1;
    //         else
    //             a = 0;
    //     }
    //     cout << endl;
    // }

    // METHOD-2

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {

            if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}