#include <iostream>
using namespace std;

int main()
{

    int *ptr;
    cout << "address of empty pointer " << &ptr << endl;
    // because pointer is also a variable so pointer have address too

    int marks = 100;
    ptr = &marks; // whenever reassign pointer no need to use * again

    cout << "address of marks in pointer : " << ptr << endl;

    return 0;
}