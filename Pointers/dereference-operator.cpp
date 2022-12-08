#include <iostream>
using namespace std;

int main()
{

    int x;   // initializing x some garbage value at x
    x = 100; // now garbage value replace with 100

    int *ptr = &x; // here take one ptr variable which store address of x;

    // can we get x value using ptr -> yes using dereference operator(*)

    cout << "value of x : " << x << endl;
    cout << "address of x : " << &x << endl;

    cout << "address of x which stored by ptr :" << ptr << endl;
    cout << "value of x using dereference operatot : " << *ptr << endl;

    cout << "ptr also a variable which itself have some address : " << &ptr << endl;

    return 0;
}