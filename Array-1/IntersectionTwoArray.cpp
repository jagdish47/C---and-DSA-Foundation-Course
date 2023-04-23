#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> one{1, 2, 3, 4, 5, 6, 7};
    vector<int> two{5, 6, 7, 8, 9, 10};

    vector<int> ans;

    for (int i = 0; i < one.size(); i++)
    {

        for (int j = 0; j < two.size(); j++)
        {

            if (one[i] == two[j])
            {
                ans.push_back(one[i]);
                break;
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}

// Intersection means common element from both the array.