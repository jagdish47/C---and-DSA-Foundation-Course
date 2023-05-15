#include <bits/stdc++.h>
using namespace std;

void printTillN(int n)
{

    if (n <= 0)
    {
        return;
    }

    cout << n << endl;
    printTillN(n - 1);
}

int main()
{

    int n;
    cout << "enter number : ";
    cin >> n;

    printTillN(n);

    return 0;
}