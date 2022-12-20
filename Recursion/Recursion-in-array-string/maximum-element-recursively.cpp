#include <iostream>
using namespace std;

int findMaxi(int *arr, int start, int end)
{

    if (start == end - 1)
    {
        return arr[end];
    }

    return max(arr[start], findMaxi(arr, start + 1, end));
}

int main()
{

    int arr[] = {4, 54, 56, 34, 2, 5, 7, 10};
    int start = 0;
    int end = *(&arr + 1) - arr;

    cout << findMaxi(arr, start, end) << endl;

    return 0;
}