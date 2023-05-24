#include <bits/stdc++.h>
using namespace std;

void findMini(int arr[], int start, int end, int &mini)
{

    if (start >= end)
    {
        return;
    }

    if (arr[start] < mini)
    {
        mini = arr[start];
    }

    findMini(arr, start + 1, end, mini);
}

int main()
{

    int arr[] = {45, 4, 54, 35, 45, 3, 9, 8, 7, 100};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int mini = INT_MAX;

    findMini(arr, start, size, mini);

    cout << "Minimum : " << mini << endl;

    return 0;
}