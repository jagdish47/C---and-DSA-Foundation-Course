#include <iostream>
using namespace std;

int sum(int x, int y)
{
    return x + y;
}

int main()
{

    cout << sum(10, 5) << endl;

    int store = sum(10, 20);
    cout << store << endl;

    return 0;
}