#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr1[] = {3, 4, 5, 6, 7};
    int sizeOne = 5;

    int arr2[] = {6, 7, 8, 9, 10};
    int sizeTwo = 5;

    vector<int> result;

    for (int i = 0; i < sizeOne; i++)
    {
        result.push_back(arr1[i]);
    }
    for (int i = 0; i < sizeTwo; i++)
    {
        result.push_back(arr2[i]);
    }

    for (int i = 0; i < result.size(); i++)
    {

        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
