#include <bits/stdc++.h>
using namespace std;

int main()
{

    // string str = "Jagdish Kumawat";
    //  int max = 0;
    //  for (int i = 0; i < str.size(); i++)
    //  {
    //      int count = 0;
    //      for (int j = 1; j < str.size(); j++)
    //      {

    //         if (str[i] == str[j])
    //         {
    //             count++;
    //         }
    //     }

    //     if (count > max)
    //     {
    //         max = count;
    //     }

    //     cout << str[i] << " " << count << endl;
    // }

    string str = "leetcode";

    vector<int> alpha(26, 0); // creating an array of 26 number

    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];

        int ascii = (int)ch; // getting ascii value of that char

        alpha[ascii - 97]++; // ascii value of [a-z] is 97-108 so we minus 97 and we get that value.
    }

    // Just for printing that array how time it comes
    for (int i = 0; i < alpha.size(); i++)
    {

        cout << alpha[i] << " ";
    }
    cout << endl;

    int max = 0;
    char ch;

    for (int i = 0; i < alpha.size(); i++)
    {
        if (alpha[i] > max)
        {
            max = alpha[i];      // getting maximum time occuring
            ch = (char)(i + 97); // converting back to character of that character
        }
    }

    cout << ch << " " << max << endl;

    return 0;
}