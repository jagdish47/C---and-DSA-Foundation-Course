#include <bits/stdc++.h>
using namespace std;

int main()
{

    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(4);
    pq.push(7);
    pq.push(3);
    pq.push(10);
    pq.push(9);
    pq.push(1);

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    pq.pop();

    if (pq.empty())
    {
        cout << "Yes, it's empty" << endl;
    }
    else
    {
        cout << "No, it's not empty" << endl;
    }

    return 0;
}