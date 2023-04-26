#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    cout << "Enter a stirng : " << endl;
    getline(cin, str);

    int count = 0;

    for (int i = 0; i < str.size(); i++)
    {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }

    cout << "Total number of vowels is : " << count << endl;

    return 0;
}