#include <bits/stdc++.h>
using namespace std;

bool isPresent(string str, int start, int end, char target)
{

    if (start >= end)
    {
        return false;
    }

    if (str[start] == target)
    {
        return true;
    }

    return isPresent(str, start + 1, end, target);
}

int main()
{

    string str = "radhe krishna";
    int start = 0;
    int end = str.size();

    char target = 'k';

    bool answer = isPresent(str, start, end, target);

    cout << answer << endl;

    return 0;
}