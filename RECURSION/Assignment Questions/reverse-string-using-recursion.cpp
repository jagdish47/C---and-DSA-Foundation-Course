#include <bits/stdc++.h>
using namespace std;

void reverseString(string &str, int start, int end)
{

    if (start >= end)
    {
        return;
    }

    swap(str[start], str[end]);

    reverseString(str, start + 1, end - 1);
}

int main()
{

    string str = "krishna";
    int start = 0;
    int end = str.size() - 1;

    cout << str << endl;

    reverseString(str, start, end);

    cout << str << endl;

    return 0;
}