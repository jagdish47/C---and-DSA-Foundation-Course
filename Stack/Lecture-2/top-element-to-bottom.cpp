#include <bits/stdc++.h>
#include <stack>
using namespace std;

void solve(stack<int> &st, int target)
{
    if (st.empty())
    {
        st.push(target);
        return;
    }

    int temp = st.top();
    st.pop();

    solve(st, target);

    st.push(temp);
}

void topFirst(stack<int> &st)
{

    if (st.empty())
    {
        cout << "stack is empty, can't insert at bottom" << endl;
        return;
    }

    int target = st.top();
    st.pop();
    solve(st, target);
}

int main()
{

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    topFirst(st);

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}