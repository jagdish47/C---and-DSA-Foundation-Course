#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "abcdefghijklmnopqrstuvwxyzhowareyoubrotherdoknowthisABCDEFGHIJ";

    unordered_map<char, int> umap;

    for (int i = 0; i < str.size(); i++)
    {

        umap[str[i]]++;
    }

    for (auto x : umap)
    {

        cout << x.first << "->" << x.second << endl;
    }

    return 0;
}