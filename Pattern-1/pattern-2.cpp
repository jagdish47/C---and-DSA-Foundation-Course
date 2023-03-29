#include <iostream>
using namespace std;

int main()
{

    int row = 4;

    for (int i = 1; i <= row; i++)
    {

        for (int j = 1; j <= row; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}