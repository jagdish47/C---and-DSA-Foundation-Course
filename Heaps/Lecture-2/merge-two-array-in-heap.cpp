#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr1[] = {10, 1, 2, 3, 20, 30};
    int arr2[] = {8, 9, 7, 100};

    int n = 6;
    int m = 4;

    priority_queue<int> pq;

    for (int i = 0; i < n; i++)
    {

        pq.push(arr1[i]);
    }

    for (int i = 0; i < m; i++)
    {

        pq.push(arr2[i]);
    }

    cout << pq.top() << endl;

    return 0;
}