#include <iostream>
#include <limits.h>
using namespace std;

int main()
{

    int arr[] = {34, 65, 23, 65, 34, 67, 75, 78};
    int size = sizeof(arr) / sizeof(arr[0]);

    int firstMax = INT_MIN;

    for (int i = 0; i < size; i++)
    {

        if (arr[i] > firstMax)
        {
            firstMax = arr[i];
        }
    }

    int secondMax = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if ((secondMax < arr[i]) && (arr[i] != firstMax))
        {
            secondMax = arr[i];
        }
    }

    cout << "second max : " << secondMax << endl;
    cout << "first max : " << firstMax << endl;

    return 0;
}