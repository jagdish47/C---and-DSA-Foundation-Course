// Write a function to print first five natural number squares ?

/*
#include <iostream>
using namespace std;

void printSquare()
{
    for (int i = 1; i <= 5; i++)
    {
        cout << i * i << endl;
    }
}

int main()
{
    printSquare();
    return 0;
}
*/

#include <iostream>
using namespace std;

int printSquare(int x)
{
    return x * x;
}

int main()
{
    int x;
    cout << "enter x : ";
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        cout << printSquare(i) << endl; // the x times function will called
    }
    return 0;
}