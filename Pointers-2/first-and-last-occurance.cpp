#include <bits/stdc++.h>
using namespace std;

int findFirstAndLastOccurance(string str, char ch, int *first, int *last)
{

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ch)
        {
            *first = i;
            break;
        }
    }

    for (int j = 0; j < str.size(); j++)
    {
        if (str[j] == ch)
        {
            *last = j;
        }
    }
}

int main()
{

    string str = "aaabcaa";
    char ch = 'a';

    int first = -1;
    int last = -1;

    int *firstacc = &first;
    int *lastacc = &last;

    cout << findFirstAndLastOccurance(str, ch, firstacc, lastacc) << endl;

    return 0;
}