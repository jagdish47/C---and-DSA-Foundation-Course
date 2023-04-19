#include <bits/stdc++.h>
using namespace std;

void reverseIt(vector<int> arr, int start, int end)
{
    while (start < end)
    {

        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{

    vector<int> arr{1, 2, 3, 4, 5, 6, 7};
    int d = 3;
    int n = arr.size();

    d = d % n;

    reverseIt(arr, 0, d);
    reverseIt(arr, d, n - 1);
    reverseIt(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
}