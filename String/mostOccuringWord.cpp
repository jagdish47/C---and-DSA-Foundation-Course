#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "How are are are are are you brother brother brother brother";

    stringstream ss(str);
    string temp;

    vector<string> v;

    while (ss >> temp)
    {
        v.push_back(temp);
    }

    // Printing the stirng of vector
    //  for (int i = 0; i < temp.length(); i++)
    //  {
    //      cout << v[i] << " ";
    //  }
    //  cout << endl;

    sort(v.begin(), v.end());

    // Printing to check
    // for (int i = 0; i < temp.length(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    int maxi = 0;
    string word;

    int count = 1;
    for (int i = 0; i < v.size() - 1; i++)
    {

        if (v[i] == v[i + 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }

        maxi = max(maxi, count);

        if (maxi == count)
        {
            word = v[i];
        }
    }

    cout << word << " " << maxi << endl;

    return 0;
}