#include <bits/stdc++.h>
using namespace std;

int findQuotient(int dividend, int divisor)
{

    int start = 0;
    int end = dividend;
    int ans = 0;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        // if we are getting exactly perfect divisor
        if (abs(mid * divisor) == abs(dividend))
        {
            ans = mid;
            break;
        }

        if (abs(mid * divisor) > abs(dividend))
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }

    if ((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0))
    {
        return ans;
    }
    else
    {
        return -ans;
    }
}

int main()
{

    int dividend = 22;
    int divisor = 7;

    int ans = findQuotient(dividend, divisor);

    cout << ans << endl;

    return 0;
}