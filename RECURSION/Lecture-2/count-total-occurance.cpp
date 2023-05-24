#include <bits/stdc++.h>
using namespace std;

void isPresent(string str, int start, int end, char target, int &count)
{

    if (start >= end)
    {
        return;
    }

    if (str[start] == target)
    {
        // cout << "Fount it : " << start << endl;
        count++;
    }

    return isPresent(str, start + 1, end, target, count);
}

int main()
{

    string str = "radhe krishna kunj kk";
    int start = 0;
    int end = str.size();

    char target = 'k';
    int count = 0;

    isPresent(str, start, end, target, count);

    cout << "Total Occurance : " << count << endl;

    return 0;
}