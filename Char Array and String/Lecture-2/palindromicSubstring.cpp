/*

Given a string s, return the number of palindromic substrings in it.
A string is a palindrome when it reads the same backward as forward.
A substring is a contiguous sequence of characters within the string.


Example 1:

Input: s = "abc"
Output: 3
Explanation: Three palindromic strings: "a", "b", "c".

Example 2:

Input: s = "aaa"
Output: 6
Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".

*/

bool checkPalindrome(string s)
{

    int i = 0;
    int j = s.size() - 1;

    while (i <= j)
    {

        if (s[i] != s[j])
        {
            return false;
        }

        i++;
        j--;
    }

    return true;
}

int countSubstrings(string s)
{

    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        string bag = "";
        for (int j = i; j < s.length(); j++)
        {

            bag += s[j];
        }

        if (checkPalindrome(bag))
        {
            count++;
        }
    }

    return count;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "aaa";
    // countSubstrings(str)

    cout << countSubstrings(str) << endl;

    return 0;
}