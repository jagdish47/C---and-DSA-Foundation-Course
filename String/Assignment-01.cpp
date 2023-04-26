// Input a string of size n and update all the odd positions in the string to character ‘#’. Consider 0-based indexing.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "Pbwcshkuiglhlds";

    for (int i = 0; i < str.size(); i++)
    {

        if (i % 2 != 0)
        {
            str[i] = '#';
        }
    }

    cout << str << endl;

    return 0;
}