#include <bits/stdc++.h>
using namespace std;

int findSquareRoot(int num)
{

    int target = num;
    int start = 1;
    int end = num;

    int ans = -1;

    while (start < end)
    {

        int mid = start + (end - start) / 2;

        if (mid * mid == target)
        {
            return mid;
        }

        if (mid * mid > target)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int num = 64;
    int ans = findSquareRoot(num);
    cout << ans << endl;
    return 0;
}