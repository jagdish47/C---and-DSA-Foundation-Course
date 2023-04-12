#include <iostream>
#include <vector>
using namespace std;

int findLastOccurance(vector<int> v, int target)
{

    for (int i = v.size() - 1; i >= 0; i--)
    {

        if (v[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int main()
{

    vector<int> v{10, 20, 45, 4, 99, 30, 40, 10, 40, 20, 30, 40};
    int target = 40;

    cout << findLastOccurance(v, target) << endl;

    return 0;
}