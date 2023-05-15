#include <bits/stdc++.h>
using namespace std;

void printName(int n)
{

    if (n == 6)
    {
        return;
    }

    cout << n << " Jagdish Kumawat" << endl;

    printName(n + 1);
}

int main()
{

    int n = 1;
    printName(n);
    return 0;
}