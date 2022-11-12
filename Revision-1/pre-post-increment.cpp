#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    int b = 20;

    cout << "Initial : " << a << endl;
    cout << "Initial : " << b << endl;

    a++;
    b++;

    cout << "Post : " << a << endl;
    cout << "Post : " << b << endl;

    ++a;
    ++b;

    cout << "Pre : " << a << endl;
    cout << "Pre : " << b << endl;
    return 0;
}