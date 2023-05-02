#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8};
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    // This will give you true or false. 1-true, 0-False
    // cout << binary_search(v.begin(), v.end(), 7) << endl;

    // This is how we use Binary Search inside array
    // cout << binary_search(arr, arr + 7, 7) << endl;

    if (binary_search(v.begin(), v.end(), 7))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Didn't Found" << endl;
    }

    return 0;
}