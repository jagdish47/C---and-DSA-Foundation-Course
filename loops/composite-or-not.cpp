#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "enter a number : ";
    cin >> num;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "Yes! given number is composite number." << endl;
            break;
        }
        }

    return 0;
}