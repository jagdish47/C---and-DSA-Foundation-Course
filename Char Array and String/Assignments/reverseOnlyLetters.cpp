#include <bits/stdc++.h>
using namespace std;

string reverseOnlyLetters(string s)
{

    int start = 0;
    int end = s.size() - 1;

    while (start <= end)
    {

        if (s[start] != '-' && s[end] != '-')
        {
            swap(s[start], s[end]);
            start++;
            end--;
        }
        else if (s[start] == '-')
        {
            start++;
        }
        else
        {
            end--;
        }
    }

    return s;
}

int main()
{

    string s = "a-bC-dEf-ghIj";
    cout << reverseOnlyLetters(s) << endl;
    return 0;
}