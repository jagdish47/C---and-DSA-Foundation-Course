#include <iostream>
using namespace std;

int main()
{

    int n = 4;

    // for (int i = 1; i <= n; i++)
    // {
    //     int alpha = 65;

    //     for (int j = 1; j <= n; j++)
    //     {

    //         cout << (char)alpha << " ";
    //         alpha++;
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << (char)(j + 64) << " ";
        }
        cout << endl;
    }
    return 0;
}