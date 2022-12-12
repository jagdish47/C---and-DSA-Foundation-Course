#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {5, 10};

    int *ptr = &arr[0];

    *ptr++;

    cout << *ptr << endl;

        return 0;
}