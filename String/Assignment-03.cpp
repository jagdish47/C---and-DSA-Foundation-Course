#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "abcdcba";

    int start = 0;
    int end = str.size() - 1;

    bool flag = true;

    while (start < end)
    {

        if (str[start] != str[end])
        {
            flag = false;
            break;
        }

        start++;
        end--;
    }

    (flag) ? cout << "Palindrome" << endl : cout << "not Palindrome" << endl;

    return 0;
}