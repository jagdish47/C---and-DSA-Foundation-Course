#include <bits/stdc++.h>
using namespace std;

int isPresent(string str, int start, int end, char target)
{

    if (start >= end)
    {
        return -1;
    }

    if (str[start] == target)
    {
        return start;
    }

    return isPresent(str, start + 1, end, target);
}

int main()
{

    string str = "radhe krishna";
    int start = 0;
    int end = str.size();

    char target = 'k';

    int answer = isPresent(str, start, end, target);

    cout << answer << endl;

    return 0;
}