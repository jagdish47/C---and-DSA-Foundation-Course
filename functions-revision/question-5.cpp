//  Given two numbers a and b, write a program to print all the prime numbers present in a and b.

#include <iostream>
using namespace std;

bool isPrime(int x)
{

    int count = 0;

    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            count++;
        }
    }

    if (count > 2)
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
    cout << "enter a and b : ";
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}