#include <bits/stdc++.h>
using namespace std;

int summationIs(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + summationIs(n - 1);
}

int main()
{

    int n = 5;
    cout << summationIs(n) << endl;

    return 0;
}