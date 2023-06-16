#include <bits/stdc++.h>
#include <stack>
#include <queue>
using namespace std;

int main()
{

    queue<int> qu;

    qu.push(3);
    qu.push(6);
    qu.push(9);
    qu.push(12);
    qu.push(15);

    int k = 3;

    stack<int> st;
    int count = 0;
    int n = qu.size();

    if (k == 0 || k > n)
    {
        return 0;
    }

    while (!qu.empty())
    {
        int temp = qu.front();
        qu.pop();

        st.push(temp);
        count++;

        if (count == k)
        {
            return 0;
        }
    }

    while (!st.empty())
    {
        int temp = st.top();
        st.pop();
        qu.push(temp);
    }

    count = 0;
    while (!qu.empty() && n - k != 0)
    {
        int temp = qu.front();
        qu.pop();
        qu.push(temp);
        count++;

        if (count == n - k)
        {
            break;
        }
    }

    // printing the queue

    while (!qu.empty())
    {

        cout << qu.front() << " ";
        qu.pop();
    }
    cout << endl;
    return 0;
}