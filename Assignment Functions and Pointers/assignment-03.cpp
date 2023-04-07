// Given two numbers a and b, write a function to print all odd numbers between them.

#include <iostream>
using namespace std;

void printOddNumber(int start, int end)
{

    cout << "Odd numbers from " << start << " to " << end << endl;

    for (int i = start; i <= end; i++)
    {

        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{

    int start, end;

    cout << "enter starting from : ";
    cin >> start;

    cout << "enter ending at : ";
    cin >> end;

    printOddNumber(start, end);

    return 0;
}