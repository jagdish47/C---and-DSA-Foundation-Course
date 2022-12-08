#include <iostream>
using namespace std;

int main()
{

    int x = 10;
    float y = 3.14;
    char z = 'S';

    // we know how go get addresss of these variables
    cout << "address of x : " << &x << endl;
    cout << "address of y : " << &y << endl;
    cout << "address of z : " << &z << endl;

    // can we store these addresses

    // no we cant store address like these because address in form of Hexadecimal
    // int newX = &x;
    // float nexY = &y;
    // char newZ = &z;

    // To store these address we have special type of variable which is called Pointer
    // using pointer we can store these type of address

    int *ptr = &x;
    float *ptr2 = &y;
    char *ptr3 = &z;

    cout << "address stored of x is : " << ptr << endl;
    cout << "address stored of y is : " << ptr2 << endl;
    cout << "address stored of z is : " << ptr3 << endl;
    return 0;
}

// Defination
// so pointer is a special type of variable which store address of another variables