#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    cout << "Enter string which length is greater than 5 : " << endl;
    getline(cin, str);

    reverse(str.begin() + 1, str.end() + 5);

    // cout << str << endl;

    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i];
    }
    cout << endl;

    return 0;
}