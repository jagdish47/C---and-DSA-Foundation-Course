#include <iostream>
using namespace std;

int main()
{

    int n = 5;
    int alpha = 64;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << (char)(alpha + k) << " ";
        }
        cout << endl;
    }

    return 0;
}