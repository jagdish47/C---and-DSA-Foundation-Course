#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int *ptr = &arr[0];

    // cout << ptr << " " << *ptr << endl;
    // cout << (ptr + 1) << " " << *(ptr + 1) << endl;
    // cout << (ptr + 1) << " " << *(ptr + 1) << endl;
    // cout << (ptr + 2) << " " << *(ptr + 2) << endl;
    // cout << (ptr + 3) << " " << *(ptr + 3) << endl;
    // cout << (ptr + 4) << " " << *(ptr + 4) << endl;
    // cout << (ptr + 5) << " " << *(ptr + 5) << endl;

    for (int i = 0; i < n; i++)
    {
        cout << *(ptr + i) << " ";
    }
    return 0;
}