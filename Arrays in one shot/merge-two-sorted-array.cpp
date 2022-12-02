#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vec1 = {1, 3, 5}; // n
    vector<int> vec2 = {2, 4, 6}; // m

    int i = 0;
    int j = 0;
    while (i < vec1.size() && j < vec2.size())
    {

        if (vec1[i] < vec2[j])
        {
            cout << vec1[j] << " ";
            i++;
        }

        else
        {
            cout << vec2[j] << " ";
            j++;
        }
    }

    // if element left in 1st vector
    while (i < vec1.size())
    {
        cout << vec1[i];
        i++;
    }

    // if element left in 2nd vector
    while (j < vec2.size())
    {
        cout << vec2[j];
        j++;
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