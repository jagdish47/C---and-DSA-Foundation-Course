#include <iostream>
#include <vector>
#include <algorithm> //sort method wont work if we not include algorithm file
using namespace std;

int main()
{

    vector<int> v{10, 30, 50, 30, 50, 60};

    cout << v.at(0) << endl;
    cout << v.at(2) << endl;
    cout << v.at(4) << endl;

    // Changing value of vector using at()

    v.at(0) = 100;
    v.at(1) = 500;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << "Sort the vector using sort() Function " << endl;

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}