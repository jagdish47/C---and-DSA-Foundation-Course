#include <iostream>
#include <limits.h>
using namespace std;

int main()
{

    int arr[] = {34, 43, 64, 23, 53, 3, 565, 34, 65, 34343, 43};
    int size = sizeof(arr) / sizeof(arr[0]);
    int mini = INT_MAX;

    for (int i = 0; i < size; i++)
    {

        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }

    cout << "MINIMUM : " << mini << endl;

    return 0;
}