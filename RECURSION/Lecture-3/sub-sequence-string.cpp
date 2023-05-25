#include <bits/stdc++.h>
using namespace std;

void subString(string str, string output, int i)
{

    if (i >= str.size())
    {
        cout << output << endl;
        return;
    }

    // exclude
    subString(str, output, i + 1);

    // include
    output.push_back(str[i]);
    subString(str, output, i + 1);
}

int main()
{

    string str = "abcd";
    string output = "";
    int i = 0;

    subString(str, output, i);

    return 0;
}