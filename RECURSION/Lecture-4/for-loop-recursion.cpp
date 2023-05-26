#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> vec, int i)
{

    for (; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
        solve(vec, i + 1);
    }
}

int main()
{

    vector<int> vec{1, 2, 3, 4, 5};

    int i = 0;

    solve(vec, i);

    return 0;
}