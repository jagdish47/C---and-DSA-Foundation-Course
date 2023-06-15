#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main()
{

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << "size of : " << q.size() << endl;
    cout << "front ele : " << q.front() << endl;
    cout << "is empty : " << q.empty() << endl;
    cout << "back of queue(REAR) : " << q.back() << endl;

    cout << "Printing the Queue" << endl;

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}