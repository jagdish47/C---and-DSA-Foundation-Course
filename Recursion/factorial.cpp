#include <bits/stdc++.h>
using namespace std;

int findFact(int n)
{
    if (n == 1)
    {
        return 1;
    }

    // int ans = n * findFact(n - 1);
    // return ans;
    return n * findFact(n - 1);
}

int main()
{

    int n = 5;

    cout << findFact(n) << endl;
    ;

    return 0;
}