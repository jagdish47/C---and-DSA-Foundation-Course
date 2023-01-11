#include <bits/stdc++.h>
using namespace std;

bool palindrome(int num)
{

    if (num >= 0 && num <= 9)
    {
        return true;
    }
}

int main()
{
    int num = 1221;
    cout << palindrome(num) << endl;
    return 0;
}