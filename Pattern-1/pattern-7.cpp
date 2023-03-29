#include <iostream>
using namespace std;

int main()
{
    int num = 4;

    for (int i = 1; i <= num; i++)
    {

        for (int j = 1; j <= i; j++)
        {

            if (j % 2 == 1)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}