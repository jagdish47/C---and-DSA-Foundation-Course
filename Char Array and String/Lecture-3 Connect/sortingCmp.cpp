#include <bits/stdc++.h>
using namespace std;

bool cmp(char first, char second)
{
    return first < second;
}

int main()
{

    string str = "anshu";

    sort(str.begin(), str.end(), cmp);

    cout << str << endl;

    return 0;
}