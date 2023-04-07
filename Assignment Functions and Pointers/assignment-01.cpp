// Write a function to print squares of first n natural numbers, taking n as argument to the function

#include <iostream>
using namespace std;

void printSquares(int num)
{

    int suare;

    for (int i = 1; i <= num; i++)
    {

        cout << i << " " << i * i << endl;
    }
}

int main()
{

    int num;
    cout << "enter number : ";
    cin >> num;

    printSquares(num);
}