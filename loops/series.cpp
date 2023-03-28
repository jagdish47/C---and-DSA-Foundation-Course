#include <iostream>
using namespace std;

int main()
{

    int number;
    cout << "enter a number : ";
    cin >> number;

    int sum = 0;

    for (int i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}