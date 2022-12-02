#include <iostream>
#include <vector>
using namespace std;

bool findPair(vector<int> v, int k)
{
    int i = 0;
    int j = v.size() - 1;

    while (i < j)
    {
        if (v[i] + v[j] == k)
        {
            return true;
        }
        else if (v[i] + v[j] > k)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return false;
}
int main()
{
    vector<int> vec = {1, 2, 3, 4};
    int k = 9;
    cout << findPair(vec, k) << endl;

    return 0;
}