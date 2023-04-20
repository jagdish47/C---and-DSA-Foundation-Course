// Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
// rectangle from (l1,r1) to (l2, r2).

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int l1 = 1, r1 = 2, l2 = 3, r2 = 3;

    vector<vector<int>> arr{{1, 2, -3, 4}, {0, 0, -4, 2}, {1, -1, 2, 3}, {-4, -5, -7, 0}};

    int sum = 0;

    for (int i = min(l1, l2); i <= max(l1, l2); i++)
    {

        for (int j = min(r1, r2); j <= max(r1, r2); j++)
        {
            sum += arr[i][j];
        }
    }

    cout << "Summation is : " << sum << endl;

    return 0;
}
