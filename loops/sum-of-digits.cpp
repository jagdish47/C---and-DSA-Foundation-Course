#include <iostream>
using namespace std;

int main()
{

    int number;
    cout << "enter number : ";
    cin >> number;
    int sum = 0;

    while (number > 0)
    {
        int lastDigit = number % 10;
        sum += lastDigit;

        number = number / 10;
    }

    cout << sum << endl;

    return 0;
}