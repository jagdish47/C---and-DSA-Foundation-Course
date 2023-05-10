#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "madam";

    int start = 0;
    int end = str.size() - 1;

    bool flag = true;

    while (start < end)
    {

        if (str[start] == str[end])
        {
            flag = true;
        }

        else
        {
            flag = false;
            break;
        }
        start++;
        end--;
    }

    if (flag)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "not Palindrome" << endl;
    }

    return 0;
}