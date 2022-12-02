#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vec1 = {1, 3, 5};
    vector<int> vec2 = {2, 4, 6};

    int till = vec1.size() + vec2.size();

    int i = 0;
    int j = 0;
    int k = 0;
    while (i < till)
    {

        if (vec1[j] < vec2[k])
        {
            cout << vec1[j] << " ";
            j++;
        }

        else if (vec1[j] > vec2[k])
        {
            cout << vec2[k] << " ";
            k++;
        }
        else
        {
            cout << vec2[vec2.size()-1] << " ";
        }
        i++;
    }

    // approach - 2 = didn't work
    /*
    for (int i = 0; i < vec1.size() * 2; i++)
    {
        if (i < vec1.size())
        {
            cout << vec1[i] << " ";
        }
        else
        {
            cout << vec2[i - vec1.size()] << " ";
        }
    }
    */

    // approach - 1 = brute force method

    /*
    vector<int> sorted;

    store first array
    for (int i = 0; i < vec1.size(); i++)
    {
        sorted.push_back(vec1[i]);
    }

    store second array
    for (int j = 0; j < vec2.size(); j++)
    {
        sorted.push_back(vec2[j]);
    }

    print complete array
    for (int k = 0; k < sorted.size(); k++)
    {
        cout << sorted[k] << " ";
    }
    */

    return 0;
}