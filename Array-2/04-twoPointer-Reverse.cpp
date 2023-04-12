#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v{10, 20, 30, 40, 50};

    int i = 0;
    int j = v.size() - 1;

    while (i <= j)
    {

        swap(v[i], v[j]);
        i++;
        j--;
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}