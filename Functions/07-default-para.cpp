#include <iostream>
using namespace std;

void func(int a, int b, int c = 30)
{
    cout << a << " " << b << " " << c << " " << endl;
}

int main()
{

    func(10, 20, 50); // they are first priority, if we do not provide them arguments than they will take defaul arguments.

    return 0;
}