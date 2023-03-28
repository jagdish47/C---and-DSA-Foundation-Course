#include <iostream>
using namespace std;

int main()
{

    int num = 12345;
    int lastDigit;
    int rev = 0;

    while (num > 0)
    {
        lastDigit = num % 10;
        rev = rev * 10 + lastDigit;
        num /= 10;
    }

    cout << rev << endl;

    return 0;
}