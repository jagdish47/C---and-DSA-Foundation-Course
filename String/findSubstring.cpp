#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "abcei";

    for (int i = 0; i < str.size(); i++)
    {

        string bag = "";

        for (int j = i; j < str.size(); j++)
        {
            bag += str[j];
        }
    }

    return 0;
}