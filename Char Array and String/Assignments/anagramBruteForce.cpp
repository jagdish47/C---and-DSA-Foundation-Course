#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "rat";
    string n = "cat";

    sort(s.begin(), s.end());
    sort(n.begin(), n.end());

    if (s == n)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}