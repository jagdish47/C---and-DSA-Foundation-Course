#include <iostream>
#include <vector>
using namespace std;

void sortZeroOneTwo(vector<int> &arr)
{

    int n = arr.size();
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            cnt0++;
        else if (arr[i] == 1)
            cnt1++;
        else
            cnt2++;
    }

    // Replace the places in the original array:
    for (int i = 0; i < cnt0; i++)
        arr[i] = 0; // replacing 0's

    for (int i = cnt0; i < cnt0 + cnt1; i++)
        arr[i] = 1; // replacing 1's

    for (int i = cnt0 + cnt1; i < n; i++)
        arr[i] = 2; // replacing 2's
}

int main()
{

    vector<int> v{1, 2, 0, 0, 2, 1, 0, 1, 2, 0};

    sortZeroOneTwo(v);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}