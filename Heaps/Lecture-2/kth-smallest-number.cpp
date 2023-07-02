#include <bits/stdc++.h>
using namespace std;

int kthSmallestNumber(int arr[], int n, int k)
{

    priority_queue<int> pq;

    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }

    for (int i = k; i < n; i++)
    {

        int element = arr[i];

        if (element < pq.top())
        {
            pq.pop();
            pq.push(element);
        }
    }

    return pq.top();
}

int main()
{
    int arr[] = {10, 2, 5, 3, 4, 5};
    int n = 6;
    int k = 3;

    int ans = kthSmallestNumber(arr, n, k);

    cout << "kth smallest is : " << ans << endl;
    return 0;
}