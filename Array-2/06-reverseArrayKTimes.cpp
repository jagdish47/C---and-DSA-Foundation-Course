#include <iostream>
#include <vector>
using namespace std;

void reverseParticular(int start, int end, vector<int> &v)
{

    while (start <= end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }
}

int main()
{

    vector<int> v{1, 6, 2, 3, 7, 4, 8};
    int k = 2;

    k = k % v.size() - 1;

    reverseParticular(0, (v.size() - 1) - k, v);

    reverseParticular(v.size() - k, v.size() - 1, v);

    reverseParticular(0, v.size() - 1, v);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}