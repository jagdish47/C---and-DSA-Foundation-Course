#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "abcdefghi";

    int start = 0;
    int end = str.size() / 2;

    for (int i = 0; i < str.size() / 2; i++)
    {

        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    for (int i = 0; i <= str.size() / 2; i++)
    {
        cout << str[i] << " ";
    }

    return 0;
}