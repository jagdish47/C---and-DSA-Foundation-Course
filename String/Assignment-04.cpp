#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "abcdefgh";

    int start = str.size() / 2;
    int end = str.size() - 1;

    while (start < end)
    {

        swap(str[start], str[end]);
        start++;
        end--;
    }

    cout << str << endl;

    return 0;
}