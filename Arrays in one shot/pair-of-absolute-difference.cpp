#include <iostream>
#include <vector>
using namespace std;

bool findAbsDifference(vector<int> v, int k)
{

    int i = 0;
    int j = 1;
    cout << k << endl;

    while (i < v.size() && j < v.size())
    {
        int diff = abs(v[i] - v[j]);

        if (diff == k)
        {
            return true;
        }
        else if (diff < k)
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    return false;
}

int main()
{

    vector<int> v = {5, 10, 15, 20, 26};
    int k = 100;

    bool ans = findAbsDifference(v, k);

    if (ans)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}