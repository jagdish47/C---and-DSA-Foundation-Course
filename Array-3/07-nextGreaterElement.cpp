#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> v)
{

    int maxi = -1;
    vector<int> greaterElement;

    for (int i = 1; i < v.size(); i++)
    {

        greaterElement.push_back(maxi);

        if (v[i] > maxi)
        {

            maxi = v[i];
        }
    }

    return greaterElement;
}
int main()
{

    vector<int> v{4, 2, 0, 3, 2, 5};

    vector<int> ans = nextGreaterElement(v);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    cout << endl;

    return 0;
}