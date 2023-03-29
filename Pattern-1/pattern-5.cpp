#include <iostream>
using namespace std;

int main()
{

    int num = 5;

    // method-1
    // for (int i = 1; i <= num; i++)
    // {

    //     for (int j = num; j >= i; j--)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // method-2
    for (int i = 1; i <= num; i++)
    {

        for (int j = 1; j <= num - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}