#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string str)
{

    string ans = "";

    int i = 0;
    int j = -1;

    while (i < str.size())
    {

        if (ans.empty())
        {
            ans.push_back(str[i]);
            i++;
            j = 0;
        }

        if (str[i] != ans[j])
        {
            ans.push_back(str[i]);
            i++;
            j++;
        }

        else
        {
            ans.pop_back();
            j--;
            i++;
        }
    }

    return ans;
}

// string removeDuplicates(string str)
// {

//     for (int i = 0; i < str.size(); i++)
//     {

//         if (str[i] == str[i + 1])
//         {
//             str.erase(i, 2);
//             i = i - 2;
//         }
//     }

//     return str;
// }

int main()
{
    string str = "abbaca";

    cout << removeDuplicates(str) << endl;
    return 0;
}