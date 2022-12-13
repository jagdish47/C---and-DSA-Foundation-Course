#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x = 10;
    float f = 34.343;

    void *ptr;

    ptr = &x;
    cout << ptr << endl;
    // cout<<*ptr<<endl//cant dereference void pointer

    int *intPointer = (int *)ptr;
    cout << *intPointer << endl;

    ptr = &f;
    cout << ptr << endl;

    return 0;
}

// void pointer point to any datatype of variable.
// but we cannot dereferece variable.
// if we want to dereference than we need to typcaset