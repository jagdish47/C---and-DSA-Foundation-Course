#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> vec{1, 1, 2, 3, 4, 4, 3, 5, 5, 2, 88, 88};

    sort(vec.begin(), vec.end());

    for (int i = 0; i < vec.size(); i = i + 2)
    {

        if (vec[i] == vec[i + 1] && (i + 1) <= vec.size() - 1)
        {
            // cout << vec[i] << " " << vec[i + i] << endl;
            continue;
        }
        else
        {
            cout << vec[i] << endl;
            break;
        }
    }

    // Using XOR Operator
    //  int x = 0;
    //  for (int i = 0; i < vec.size(); i++)
    //  {
    //      x = x ^ vec[i];
    //  }
    //  cout << x << endl;

    return 0;
}