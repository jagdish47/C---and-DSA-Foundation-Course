#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vec{1, 2, 3, 1, 2};

    for (int i = 0; i < vec.size(); i++)
    {

        for (int j = i + 1; j < vec.size(); j++)
        {

            cout << vec[i] << " " << vec[j] << endl;
        }
    }

    return 0;
}