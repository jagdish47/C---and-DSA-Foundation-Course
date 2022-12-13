#include <bits/stdc++.h>
using namespace std;

int main()
{

    int *ptr1 = NULL; // they are now not point to any random address they point to 0 address
    int *ptr2 = 0;    // also type of null which point to 0 not any random address
    // int *ptr3 = '\0';

    cout << ptr1 << endl; // 0
    cout << ptr2 << endl; // 0
    // cout << ptr3 << endl;

    return 0;
}