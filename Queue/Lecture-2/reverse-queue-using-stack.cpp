#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> qu;

    qu.push(3);
    qu.push(6);
    qu.push(9);
    qu.push(2);
    qu.push(8);

    // cout << qu.front() << endl;
    // qu.pop();

    // cout << qu.front() << endl;

    stack<int> st;

    while (!qu.empty())
    {
        st.push(qu.front());
        qu.pop();
    }

    while (!st.empty())
    {
        qu.push(st.top());
        st.pop();
    }

    while (!qu.empty())
    {

        cout << qu.front() << " ";
        qu.pop();
    }
    cout << endl;

    return 0;
}