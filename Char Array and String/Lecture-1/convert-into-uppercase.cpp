#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "my name is jagdish kumawat";

    for (int i = 0; i < str.size(); i++)
    {
        str[i] = str[i] - 'a' + 'A';
    }

    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i];
    }
    cout << endl;

    return 0;
}