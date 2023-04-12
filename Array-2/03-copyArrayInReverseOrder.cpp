#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v{1, 2, 3, 4, 5, 6, 7};

    vector<int> rev;

    for (int i = v.size() - 1; i >= 0; i--)
    {

        rev.push_back(v[i]);
    }

    for (int i = 0; i < rev.size(); i++)
    {
        cout << rev[i] << " ";
    }

    return 0;
}