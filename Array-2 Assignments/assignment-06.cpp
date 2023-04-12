// Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vec{1, 2, 3, 4, 1, 2, 3};

    for (int i = 0; i < vec.size(); i++)
    {

        for (int j = i + 1; j < vec.size(); j++)
        {

            if (vec[i] == vec[j])
            {
                vec[i] = 0;
                vec[j] = 0;
            }
        }
    }

    for (int i = 0; i < vec.size(); i++)
    {

        if (vec[i] > 0)
        {
            cout << vec[i] << endl;
        }
    }

    return 0;
}