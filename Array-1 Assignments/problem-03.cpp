// Find the minimum value out of all elements in the array.

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{

    int arr[] = {34, 334, 3, 3, 3, 432, 34, 323, 2, 3, 2, 32, 32};
    int size = sizeof(arr) / sizeof(arr[0]);

    int mini = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }

    cout << "Minimum element is : " << mini << endl;
    return 0;
}