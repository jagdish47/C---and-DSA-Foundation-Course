#include <bits/stdc++.h>
using namespace std;

void printTillN(int n)
{

    if (n <= 0)
    {
        return;
    }

    printTillN(n - 1);
    cout << n << endl;
}

int main()
{

    int n;
    cout << "enter number : ";
    cin >> n;

    printTillN(n);

    return 0;
}