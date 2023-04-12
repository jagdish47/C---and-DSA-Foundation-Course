// WAP to find the largest three elements in the array.

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{

    int maximum = INT_MIN;
    int secondMax;
    int thirdMax;

    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < v.size(); i++)
    {

        if (v[i] > maximum)
        {
            thirdMax = secondMax;
            secondMax = maximum;
            maximum = v[i];
        }
    }

    cout << "1 : " << maximum << endl;
    cout << "2 : " << secondMax << endl;
    cout << "3 : " << thirdMax << endl;

    return 0;
}