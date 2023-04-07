#include <iostream>
using namespace std;

int main()
{
    // int a = 10, b = 20;
    // int *ptr = &a;
    // b = *ptr + 1;
    // ptr = &b;
    // cout << *ptr << " " << a << " " << b << endl;

    int a = 15, b = 20;
    int *ptr = &a;
    int *ptr2 = &b;
    *ptr = *ptr2;

    cout << a << " " << b << endl;

    return 0;
}