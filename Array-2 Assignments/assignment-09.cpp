// Find the missing element.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> vec{1, 3, 5, 3, 4};

    // for (int i = 0; i < vec.size(); i++)
    // {

    //     int index = abs(vec[i]);

    //     vec[index] = vec[index] *= -1;
    // }

    // for (int i = 0; i < vec.size(); i++)
    // {

    //     cout << vec[i] << " ";
    // }

    int sum = 0;

    for (int i = 0; i < vec.size(); i++)
    {
        sum += vec[i];
    }

    int n = vec.size();
    int naturalSum = n * (n + 1) / 2;

    cout << sum - naturalSum << endl;

    return 0;
}