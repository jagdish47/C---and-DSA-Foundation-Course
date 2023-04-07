#include <iostream>
using namespace std;

int main()
{

    int x = 10;

    int *ptr1 = &x;
    int *ptr2 = &x;

    cout << "x : " << x << endl;
    cout << "ptr1 : " << *ptr1 << endl;
    cout << "ptr2 : " << ptr2 << endl;

    return 0;
}