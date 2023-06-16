#include <bits/stdc++.h>
#include <queue>
using namespace std;

void reverse(queue<int> &qu)
{
    if (qu.empty())
    {
        return;
    }

    int ele = qu.front();
    qu.pop();

    reverse(qu);

    qu.push(ele);
}

int main()
{

    queue<int> qu;

    qu.push(3);
    qu.push(6);
    qu.push(9);
    qu.push(2);
    qu.push(8);

    reverse(qu);

    while (!qu.empty())
    {

        cout << qu.front() << " ";
        qu.pop();
    }
    cout << endl;
}