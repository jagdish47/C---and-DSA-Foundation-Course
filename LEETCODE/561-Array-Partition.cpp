#include <bits/stdc++.h>
using namespace std;

int arrayPairSum(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    int sum = 0;
    int j = 0;
    for (int i = 0; i < nums.size() / 2; i++)
    {

        sum += min(nums[j], nums[++j]);
    }

    return sum;
}

int main()
{
    vector<int> arr{6, 2, 6, 5, 1, 2};

    cout << arrayPairSum(arr) << endl;
}