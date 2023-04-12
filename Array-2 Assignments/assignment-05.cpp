// Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vec{10, 12, 34, 56, 7, 54, 32, 11};

    for (int i = 0; i < vec.size(); i++)
    {

        if (i % 2 != 0)
        {
            vec[i] *= 2;
        }
        else
        {
            vec[i] += 10;
        }
    }

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}