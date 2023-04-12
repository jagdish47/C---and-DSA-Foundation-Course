// Check if the given array is sorted or not

#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> arr)
{

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {

        if (arr[start] < arr[end])
        {
            start++;
            end--;
        }
        else
        {
            return false;
        }
    }

    return true;
}

int main()
{

    vector<int> vec{1, 2, 3, 4, 5, 6};

    cout << isSorted(vec) << endl;

    return 0;
}