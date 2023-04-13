#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v{1, 2, -1, 2, -2, 3, 5, -5};

    int start = 0;
    int end = v.size() - 1;

    while (start < end)
    {

        if (v[start] > 0 && v[end] < 0)
        {
            swap(v[start], v[end]);
            start++;
            end--;
        }

        if (v[start] < 0)
        {
            start++;
        }

        if (v[end] > 0)
        {
            end--;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}