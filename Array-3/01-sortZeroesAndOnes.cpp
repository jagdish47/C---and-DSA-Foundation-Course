#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v{1, 0, 1, 0, 0, 1, 1, 0};

    int start = 0;
    int end = v.size() - 1;

    while (start <= end)
    {

        if (start > end) // this is importante condition because it wont run 1-2 tc so we use thic condition
        {
            break;
        }

        if (v[start] == 1 && v[end] == 0) // if we write this condtion first than, we don't need above condtion. or you can use else if condtion.
        {
            swap(v[start], v[end]);
            start++;
            end--;
        }

        if (v[start] == 0)
        {
            start++;
        }

        if (v[end] == 1)
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