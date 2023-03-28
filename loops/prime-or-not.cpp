#include <iostream>
using namespace std;

int primeOrNot(int num)
{
    // methos-2 to check weather number is prime or not
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{

    int num;
    cout << "Enter a number : ";
    cin >> num;

    cout << primeOrNot(num) << endl;

    // method-2 to check weather number is prime or not

    // int count = 0;
    // for (int i = 1; i <= num; i++)
    // {
    //     if (num % i == 0)
    //     {
    //         count++;
    //     }
    // }

    // if (count == 2)
    // {
    //     cout << "Prime Number";
    // }
    // else if (num == 1)
    // {
    //     cout << "1 is neither prime or nor composite number";
    // }
    // else
    // {
    //     cout << "Not a prime number";
    // }

    return 0;
}