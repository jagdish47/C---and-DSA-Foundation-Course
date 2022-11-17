#include <iostream>
using namespace std;

int main()
{

    int m;
    cout << "enter m : ";
    cin >> m;
    int ch = 64;

    for (int i = 1; i <= m; i++)
    {

        for (int j = m - i; j >= 1; j--)
        {
            cout << "  ";
        }

        for (int j = 1; j <= i * 2 - 1; j++)
        {
            cout << char(ch + j) << " ";
        }

        cout << endl;
    }

    for (int i = 1; i <= m; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }

        for (int j = i; j <= (m - 1) * 2 - i; j++)
        {
            cout << char(ch + j) << " ";
        }

        cout << endl;
    }

    return 0;
}