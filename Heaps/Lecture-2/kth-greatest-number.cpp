#include <bits/stdc++.h>
using namespace std;

int kthGreatestElement(int arr[], int n, int k)
{

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }

    for (int i = k; i < n; i++)
    {

        int element = arr[i];

        if (element > pq.top())
        {

            pq.pop();
            pq.push(element);
        }
    }

    return pq.top();
}

int main()
{

    int arr[] = {2, 10, 6, 7, 8, 3, 15, 20};
    int n = 8;
    int k = 2;

    int ans = kthGreatestElement(arr, n, k);

    cout << "kth Gretest Element is : " << ans << endl;

    return 0;
}