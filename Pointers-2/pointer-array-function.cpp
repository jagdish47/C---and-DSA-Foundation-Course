#include <bits/stdc++.h>
using namespace std;

void pointerArr(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << " ";
    }

    *(arr + 1) = 100;
}

int main()
{

    int arr[] = {3, 45, 6, 4, 99};
    int n = 5;

    pointerArr(arr, n);
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << " ";
    }
    return 0;
}