// Input a string of length n and count all the consonants in the given string.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "pwians";

    int i = 0;
    int count = 0;

    // while (str[i] != '\0')
    // {

    //     if (str[i] != 'a' || str[i] != 'e' || str[i] != 'i' || str[i] != 'o' || str[i] != 'u')
    //     {
    //     }
    //     else
    //     {
    //         count++;
    //     }
    //     cout << str[i] << " ";
    //     i++;
    // }

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            count++;
        }
    }

    cout << "Consonenets : " << count << endl;
}