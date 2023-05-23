#include <bits/stdc++.h>
using namespace std;

int findFactorial(int n)
{

    if (n == 1)
    {
        return 1;
    }

    return n * findFactorial(n - 1);
}

int main()
{

    int n = 5;
    cout << findFactorial(n) << endl;

    return 0;
}