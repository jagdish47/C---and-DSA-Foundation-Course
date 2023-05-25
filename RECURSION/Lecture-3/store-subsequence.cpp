#include <bits/stdc++.h>
using namespace std;

void subSequence(string str, vector<string> &store, string output, int i)
{

    if (i == str.size())
    {
        store.push_back(output);
        return;
    }

    subSequence(str, store, output, i + 1);

    output = output + str[i];
    subSequence(str, store, output, i + 1);
}

int main()
{

    vector<string> store;
    string str = "abcd";
    string output = "";
    int i = 0;

    subSequence(str, store, output, i);

    for (auto x : store)
    {
        cout << "{" << x << "}"
             << " ";
    }
    cout << endl;

    return 0;
}