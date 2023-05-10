#include <bits/stdc++.h>
using namespace std;

int main()
{

    char ch[100];

    cout << "enter string" << endl;
    cin.getline(ch, 100);

    int i = 0;

    while (ch[i] != '\0')
    {
        i++;
    }

    cout << "Length of string is : " << i << endl;

    return 0;
}