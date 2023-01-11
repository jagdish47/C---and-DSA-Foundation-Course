#include <iostream>
using namespace std;

int sign(int num, int ans)
{
    if (num == 0)
    {
        return ans;
    }

    if (num % 2 == 0)
    {
        ans -= num;
    }

    if (num % 2 == 1)
    {
        ans += num;
    }

    // cout << ans << " ";
    return sign(num - 1, ans);
}

int main()
{

    int num = 10;
    int ans = 0;

    cout << sign(num, ans) << endl;

    return 0;
}