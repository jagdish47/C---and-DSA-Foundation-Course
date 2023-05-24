#include <bits/stdc++.h>
using namespace std;

void printEachDigit(int num)
{

    if (num <= 0)
    {
        return;
    }

    printEachDigit(num / 10);

    int lastDigit = num % 10;
    cout << lastDigit << endl;
}

int main()
{

    int num = 9647;

    printEachDigit(num);
    return 0;
}