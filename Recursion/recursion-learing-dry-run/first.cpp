#include <bits/stdc++.h>
using namespace std;

void fun(int num)
{
    // if (num == 0)
    if (num == 0)
    {
        return;
    }
    cout << num % 10 << endl;

    fun(num / 10);

    // cout << num << endl;
}

int main()
{
    int num = 456;
    fun(num);

    return 0;
}