#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {10, 23, 45, 6, 23, 23};
    int n = 6;

    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << " ";
    }

    return 0;
}