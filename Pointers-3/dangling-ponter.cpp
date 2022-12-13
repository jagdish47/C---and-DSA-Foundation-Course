#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *ptr = NULL;

    {
        int x = 10;
        ptr = &x;
    }

    cout << ptr << endl;
}