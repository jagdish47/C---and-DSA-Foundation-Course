#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "pwskills";

    string temp = str;

    reverse(str.begin(), str.end());

    str += temp;

    cout << str << endl;

    return 0;
}