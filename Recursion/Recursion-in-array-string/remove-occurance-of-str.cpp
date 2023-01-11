#include <bits/stdc++.h>
using namespace std;

void removeOccurance(string &str, int s, int e)
{
    if (s == e)
    {
        return;
    }

    if (str[s] == 'a')
    {
        str[s] = 0;
    }

    removeOccurance(str, s + 1, e);
}

int main()
{
    string str = "abcax";
    int s = 0;
    int e = str.length();

    removeOccurance(str, s, e);
    cout << str << endl;
    return 0;
}