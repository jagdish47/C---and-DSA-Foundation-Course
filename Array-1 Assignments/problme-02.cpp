// Find the second largest element in the given Array in one pass.

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 50, 50, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    int fMax = INT_MIN;
    int sMax = INT_MIN;

    for (int i = 0; i < size; i++)
    {

        if (arr[i] > fMax)
        {
            sMax = fMax;
            fMax = arr[i];
        }
    }

    cout << "Second Maxi : " << sMax << endl;
    return 0;
}