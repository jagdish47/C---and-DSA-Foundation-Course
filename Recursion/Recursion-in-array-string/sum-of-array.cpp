#include <iostream>
using namespace std;

int findSum(int *arr, int s, int n)
{

    if (s == n - 1)
    {
        return arr[s];
    }

    return arr[s] + findSum(arr, s + 1, n);
}

int main()
{

    int arr[] = {5, 3, 6, 7, 8};
    int n = 5;
    int s = 0;

    cout << findSum(arr, s, n) << endl;

    return 0;
}