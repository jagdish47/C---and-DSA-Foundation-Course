#include <iostream>
using namespace std;

int main()
{

    int number;
    cout << "enter a number : ";
    cin >> number;

    int store = number;

    int count = 0;

    while (number > 0)
    {
        number = number / 10;
        count++;
    }

    if (store == 0)
    {
        cout << 1 << endl;
    }
    else
        cout << count << endl;

    return 0;
}