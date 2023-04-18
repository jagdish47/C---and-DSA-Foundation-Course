#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v{3, 2, 1, 5, 2};

    int maximum = v[0];

    for (int i = 1; i < v.size(); i++)
    {

        if (v[i] > maximum)
        {
            maximum = v[i];
        }
    }

    cout << maximum << endl;
}