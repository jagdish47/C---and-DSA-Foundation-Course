// Count the number of elements strictly greater than x.

#include <iostream>
#include <vector>
using namespace std;

int greaterThanX(vector<int> v, int x)
{

    int count = 0;

    for (int i = 0; i < v.size(); i++)
    {

        if (v[i] > x)
        {
            count++;
        }
    }

    return count;
}

int main()
{

    vector<int> v{12, 3, 45, 64, 34, 23, 4, 34, 54, 34};
    int x = 50;

    cout << greaterThanX(v, x) << endl;
    return 0;
}