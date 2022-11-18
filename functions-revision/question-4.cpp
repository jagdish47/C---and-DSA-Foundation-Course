// For given numbers a and b, write a function to print all odd numbers between a and b
#include <iostream>
using namespace std;

bool oddNumber(int x)
{
    if (x % 2 == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{

    int a, b;
    cout << "enter start point : ";
    cin >> a;
    cout << "enter end point : ";
    cin >> b;

    for (int i = a; i <= b; i++)
    {
        if (oddNumber(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}