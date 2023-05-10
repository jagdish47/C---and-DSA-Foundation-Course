#include <bits/stdc++.h>
using namespace std;

void reverseString(string str)
{

    int start = 0;
    int end = str.size() - 1;

    while (start < end)
    {

        swap(str[start], str[end]);
        start++;
        end--;
    }

    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i];
    }
    cout << endl;
}

int main()
{

    string str = "yuvraj";
    reverseString(str);

    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i];
    }
    cout << endl;
    return 0;
}