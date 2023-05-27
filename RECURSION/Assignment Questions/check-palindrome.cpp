#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int start, int end)
{

    if (start > end)
    {
        return true;
    }

    if (str[start] != str[end])
    {
        return false;
    }

    return checkPalindrome(str, start + 1, end - 1);
}

int main()
{

    string str = "racecar";
    int start = 0;
    int end = str.size() - 1;

    bool ans = checkPalindrome(str, start, end);

    if (ans)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}