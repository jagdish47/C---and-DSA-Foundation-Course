#include <iostream>
using namespace std;

void change(int &x, int &y)
{
    x = 77;
    y = 88;
}
int main()
{

    int a = 10;
    int b = 20;
    change(a, b);
    cout << a << endl;
    cout << b << endl;

    // int p = 10;
    // int &q = p;

    // cout << p << &p << endl;
    // cout << q << &q << endl;

    return 0;
}