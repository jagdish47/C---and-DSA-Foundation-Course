// Write a program to find the product of two numbers using pointers.

#include <iostream>
using namespace std;

void func(int *one, int *two)
{

    cout << *one * *two << endl;
}

int main()
{

    int num1 = 3;
    int num2 = 5;

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    func(ptr1, ptr2);

    return 0;
}