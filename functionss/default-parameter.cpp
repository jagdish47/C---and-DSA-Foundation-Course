#include <iostream>
using namespace std;

void defaultParameter(int a, int b = 500) // we can assign default parameter at the end only we can not use middle or start
{
    cout << a << endl;
    cout << b << endl;
}

int main()
{
    int a = 100;
    int b = 220;

    defaultParameter(a, b);
    return 0;
}