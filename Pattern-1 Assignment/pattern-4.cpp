#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        int alpha = 64;

        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                cout << (char)(alpha + j) << " ";
            }
            else
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}