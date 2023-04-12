#include <iostream>
#include <vector>
using namespace std;

void reversePartOfarray(vector<int> &nv, int start, int end)
{

    while (start <= end)
    {
        swap(nv[start], nv[end]);

        start++;
        end--;
    }
}

int main()
{

    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8};

    reversePartOfarray(v, 2, 6);

    for (int i = 0; i < v.size(); i++)
    {

        cout << v[i] << " ";
    }
    cout << endl;
}