#include <bits/stdc++.h>
using namespace std;

int lastOccurance(string str, char search, int end, int &ans)
{

    if (end < 0)
    {
        return -1;
    }

    if (str[end] == search)
    {
        return ans = end;
    }

    return lastOccurance(str, search, end - 1, ans);
}

int main()
{

    string str = "kya bolti public";
    char src = 'b';
    int end = str.size();

    int ans = -1;

    lastOccurance(str, src, end, ans);

    cout << ans << endl;

    return 0;
}