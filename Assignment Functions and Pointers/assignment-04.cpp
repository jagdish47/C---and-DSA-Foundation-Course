// Write a function to count the number of digits in a number and then print the square of this number.

#include <iostream>
using namespace std;

void totalDigitsMakeSquare(int num)
{
    int digitCount = 0;

    while (num > 0)
    {

        digitCount++;

        num /= 10;
    }

    cout << "Total Digits : " << digitCount << endl;
    cout << "Square of Digits : " << digitCount * digitCount << endl;
}

int main()
{

    int num;
    cout << "enter number : ";
    cin >> num;

    totalDigitsMakeSquare(num);
}