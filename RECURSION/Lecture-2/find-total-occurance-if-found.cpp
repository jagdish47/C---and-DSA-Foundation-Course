#include <bits/stdc++.h>
using namespace std;

void isPresent(string str, int start, int end, char target)
{

    if (start >= end)
    {
        return;
    }

    if (str[start] == target)
    {
        cout << "Fount it : " << start << endl;
    }

    return isPresent(str, start + 1, end, target);
}

int main()
{

    string str = "radhe krishna kunj";
    int start = 0;
    int end = str.size();

    char target = 'k';

    isPresent(str, start, end, target);

    return 0;
}