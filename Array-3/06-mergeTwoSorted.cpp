#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> one, vector<int> two)
{
    int n = one.size();
    int m = two.size();

    vector<int> ans(m + n);

    int i = 0;
    int j = 0;
    int k = 0;

    while (i <= n - 1 && j <= m - 1)
    {

        if (one[i] < two[j])
        {
            ans[k] = one[i];
            i++;
        }
        else
        {
            ans[k] = two[j];
            j++;
        }
        k++;
    }

    // if your first array have more element

    if (i == n)
    {

        while (j <= m - 1)
        {
            ans[k] = two[j];
            k++;
            j++;
        }
    }

    // if your second array have more element
    if (j == m)
    {
        while (i <= n - 1)
        {
            ans[k] = one[i];
            k++;
            i++;
        }
    }

    return ans;
}

int main()
{

    vector<int> arr1{1, 3, 5, 8};
    vector<int> arr2{2, 3, 6, 7, 10, 11, 12, 13};

    vector<int> ans = merge(arr1, arr2);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}