// Given a string s, return true if the s can be palindrome after deleting at most one character from it.
#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s, int i, int j)
{

    while (i <= j)
    {

        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }

    return true;
}

bool validPalindrome(string s)
{

    int i = 0;
    int j = s.size() - 1;

    while (i <= j)
    {

        if (s[i] != s[j])
        {
            return checkPalindrome(s, i + 1, j) || checkPalindrome(s, i, j++);
        }
        else
        {
            i++;
            j--;
        }
    }
    return false;
}

int main()
{
    string str = "abca";
    // validPalindrome(str);

    cout << validPalindrome(str) << endl;

    return 0;
}
