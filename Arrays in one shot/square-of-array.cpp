#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v = {-40, -30, -10, 0, 2, 10};

    vector<int> newer;

    int i = 0;
    int j = v.size() - 1;

    while (i <= j)
    {
        if (abs(v[i]) < abs(v[j]))
        {
            newer.push_back(v[j] * v[j]);
            j--;
        }
        else
        {
            newer.push_back(v[i] * v[i]);
            i++;
        }
    }

    for (int i = newer.size() - 1; i >= 0; i--)
    {
        cout << newer[i] << " ";
    }

    return 0;
}