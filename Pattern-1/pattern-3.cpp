#include <iostream>
using namespace std;

int main()
{
    int num = 4;

    for (int i = 1; i <= num; i++)
    {

        for (int j = 1; j <= num; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}