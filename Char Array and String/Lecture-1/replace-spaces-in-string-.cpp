#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "teri mand mand muskaniya pe";

    for (int i = 0; i < str.size(); i++)
    {

        if (str[i] == ' ')
        {
            str[i] = '@';
        }
    }

    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i];
    }
    cout << endl;

    return 0;
}