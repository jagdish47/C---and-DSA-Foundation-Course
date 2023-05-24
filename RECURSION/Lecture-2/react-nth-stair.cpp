#include <bits/stdc++.h>
using namespace std;

int climbStairs(int n)
{

    if (n == 0 || n == 1) // to react at bottom 2 ways either you already reach or your at 1st step
    {
        return 1;
    }

    return climbStairs(n - 1) + climbStairs(n - 2); // we can take 2 steps or 1 steps
}

int main()
{

    int n;
    cout << "enter nth value : ";
    cin >> n;

    cout << climbStairs(n) << endl;

    return 0;
}