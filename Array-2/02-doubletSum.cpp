#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vec = {1, 2, 3, 4, 5, 6};
    int target = 7;

    for (int i = 0; i < vec.size(); i++)
    {

        for (int j = i + 1; j < vec.size(); j++)
        {

            if (vec[i] + vec[j] == target)
            {
                cout << i << " " << j << endl;
            }
        }
    }

    return 0;
}