// Find the difference between the sum of elements at even indices to the sum of elements at odd indices.

#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int main()
{

    vector<int> vec{1, 2, 23, 3, 1, 21, 14, 20};

    int oddIdxSum = 0;
    int eventIdxSum = 0;

    for (int i = 0; i < vec.size(); i++)
    {

        if (i % 2 == 0)
            eventIdxSum += vec[i];
        else
            oddIdxSum += vec[i];
    }

    cout << "Total Difference : " << abs(eventIdxSum - oddIdxSum) << endl;

    return 0;
}