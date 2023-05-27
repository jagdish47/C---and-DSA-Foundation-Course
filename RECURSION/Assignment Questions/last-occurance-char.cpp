#include <bits/stdc++.h>
using namespace std;

int lastOccurance(string str, char ser, int start, int &fin)
{

    if (str[start] == ser)
    {
        fin = start;
    }

    if (start == str.size())
    {
        return -1;
    }

    return lastOccurance(str, ser, start + 1, fin);
}

int main()
{

    string str = "kya bolti public";
    int start = 0;
    int fin = -1;

    char searchChar = 'b';
    lastOccurance(str, searchChar, start, fin);

    cout << fin << endl;

    return 0;
}