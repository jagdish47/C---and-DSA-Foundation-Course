#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 5, 6};

    int A[5] = {0};

    for (int i = 0; i < 5; i++)
    {

        A[arr[i]] = 1;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    }

    return 0;
}