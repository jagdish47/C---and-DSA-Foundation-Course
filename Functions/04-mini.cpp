#include <iostream>
using namespace std;

int mini(int x, int y)
{

    if (x > y)
        return x;
    else
        return y;
}

int main()
{

    int x, y;
    cin >> x >> y;

    cout << "Maximum : " << mini(x, y) << endl;

    return 0;
}