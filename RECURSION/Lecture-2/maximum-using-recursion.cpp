#include <bits/stdc++.h>
using namespace std;

// int findMaximum(int arr[], int start, int end, int maxi)
// {

//     if (start > end - 1)
//     {
//         return maxi;
//     }

//     if (arr[start] > maxi)
//     {
//         maxi = arr[start];
//     }

//     findMaximum(arr, start + 1, end, maxi);
// }

void findMaximum(int arr[], int start, int end, int &maxi)
{

    if (start > end - 1)
    {
        return;
    }

    if (arr[start] > maxi)
    {
        maxi = arr[start];
    }

    findMaximum(arr, start + 1, end, maxi);
}
int main()
{

    int arr[] = {45, 435, 43, 543, 5435, 34, 5, 345, 43, 543};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;

    int maxi = INT_MIN;

    findMaximum(arr, start, size, maxi);

    cout << maxi << endl;

    return 0;
}