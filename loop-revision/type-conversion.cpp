#include <iostream>
using namespace std;

int main()
{

    int a = 100;
    int b = 101;
    int c = 50;
    int e = 65;

    // This will converting int to char
    cout << (char)a << endl; // d
    cout << (char)b << endl; // e
    cout << (char)c << endl; // 2
    cout << (char)e << endl; // A

    int one = 'A';
    int two = 'x';
    int three = '#';
    int four = '+';

    cout << (int)one << endl;   // 65
    cout << (int)two << endl;   // 120
    cout << (int)three << endl; // 35
    cout << (int)four << endl;  // 43

    // This is Implicite type conversion we didn't type cast it has done automatically
    int five = 'a';
    cout << (five + 1) << endl; // 98
    return 0;
}