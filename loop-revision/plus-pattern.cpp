#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int m;
    cout << "enter only ODD number : ";
    cin >> m;

    for (int i = 1; i <= m; i++)
    {

        for (int j = 1; j <= m; j++)
        {
            if (j == (m + 1) / 2 || i == (m + 1) / 2)
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