#include <bits/stdc++.h>
using namespace std;

int insertPosition(vector<int> &vec, int insert)
{

    int ans = -1;

    int start = 0;
    int end = vec.size();

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (vec[mid] >= insert)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> vec{1, 2, 4, 7};

    // you can insert 6 in between 4-7 means 3rd position
    int insert = 6;

    int ans = insertPosition(vec, insert);
    cout << ans << endl;

    return 0;
}