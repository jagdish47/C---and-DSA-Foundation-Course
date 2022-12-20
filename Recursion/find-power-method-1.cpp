#include <iostream>
using namespace std;

int findPower(int p, int q)
{
    if (q == 0)
    {
        return 1;
    }

    return p * findPower(p, q - 1);
}

int main()
{

    int p = 3;
    int q = 4;

    cout << findPower(p, q) << endl;

    return 0;
}