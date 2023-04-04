#include <iostream>
using namespace std;

int main()
{

    int n = 4;

    for (int i = 1; i <= (2 * n) - 1; i++)
    {

        if (i <= 4)
        {

            for (int j = 1; j <= n - i; j++)
            {
                cout << "  ";
            }

            for (int k = 1; k <= (2 * i) - 1; k++)
            {
                cout << "* ";
            }
        }

        if (i > 4)
        {

            for (int x = 1; x <= i - n; x++)
            {
                cout << "  ";
            }

            for (int y = 1; y <= i; y++)
            {
                cout << "* ";
            }
        }

        cout << endl;
    }

    return 0;
}