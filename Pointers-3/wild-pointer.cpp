#include <bits/stdc++.h>
using namespace std;

int main()
{

    int *ptr; // only declare

    cout << ptr << endl;  // some random address
    cout << *ptr << endl; // some random value

    return 0;
}

// wild pointer

// wild pointer is pointer we only declare a pointer we do not initialize the pointer.
// due to this it point to some random memory address and store some random value.
// due to this we get some undefined behaviour and crashed or segment fault(memory related/)