#include <iostream>
using namespace std;

int main()
{

    int a = 20;
    int b = 30;

    int *ptr1 = &a;
    int *ptr2 = &b;

    cout << "Sum using pointer is : " << *ptr1 + *ptr2 << endl;
}