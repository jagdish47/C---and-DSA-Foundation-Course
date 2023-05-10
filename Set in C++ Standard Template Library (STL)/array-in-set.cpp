#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {4, 423, 234, 424, 2424, 24, 234, 24, 23423, 423, 42};

    int n = sizeof(arr) / sizeof(arr[0]);

    // that's how we put array inside set, now all elements will be unique
    set<int> s(arr, arr + n);

    // set<int>s(v.begin(), b.end()); //this is for vector only

    for (auto x : s)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}