#include <bits/stdc++.h>
#include <stack>
using namespace std;

void reverseIt(stack<int> &st, int target)
{

    if (st.empty())
    {
        st.push(target);
        return;
    }

    if (st.top() >= target)
    {
        st.push(target);
        return;
    }

    int topElement = st.top();
    st.pop();

    reverseIt(st, target);

    st.push(topElement);
}

void solve(stack<int> &st)
{

    if (st.empty())
    {
        return;
    }

    int target = st.top();
    st.pop();

    solve(st);

    reverseIt(st, target);
}

int main()
{

    stack<int> st;

    st.push(5);
    st.push(2);
    st.push(6);
    st.push(9);
    st.push(10);

    solve(st);

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
}