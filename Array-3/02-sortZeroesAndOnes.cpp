#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v{0, 1, 0, 1, 0, 1, 1, 0};

    int zero = 0;
    int one = 0;

    for (int i = 0; i < v.size(); i++)
    {

        if (v[i] == 1)
        {
            one++;
        }
        else
        {
            zero++;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {

        if (i < zero)
        {
            v[i] = 0;
        }
        else
        {
            v[i] = 1;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}