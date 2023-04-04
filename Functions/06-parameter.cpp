#include <iostream>
using namespace std;

int global = 10; // this is global variable you can access it anywhere.

// x and y formal parameter here.
void func(int x, int y)
{

    cout << "address of x inside Function : " << &x << endl;
    cout << "address of y inside Function : " << &y << endl;
}

int main()
{

    int x = 10;
    int y = 20;

    cout << "address of x inside main : " << &x << endl;
    cout << "address of y inside main : " << &y << endl;
    cout << endl;

    func(x, y); // x and y are actual parameter here

    return 0;
}

// when we pass argumnets they are differnt.
// whne we get parameter they are different from arguments.