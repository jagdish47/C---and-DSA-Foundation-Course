#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    cout << "actual value : " << x << endl;
    cout << "address of x : " << &x << endl;

    // empty variable address
    int y;
    cout << "address of empty y : " << &y << endl;

    return 0;
}

// & = is a address of operator which gives you address of particular block in memory(RAM)
// each time address get changes