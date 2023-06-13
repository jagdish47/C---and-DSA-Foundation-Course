#include <bits/stdc++.h>
#include <stack>
using namespace std;

void addBottom(stack<int> &st, int target)
{

    if (st.empty())
    {
        st.push(target);
        return;
    }

    int temp = st.top();
    st.pop();

    addBottom(st, target);

    st.push(temp);
}

void reverseStack(stack<int> &st)
{

    if (st.empty())
    {
        return;
    }

    int target = st.top();
    st.pop();

    // recursion calling
    reverseStack(st);

    // adding bottom function
    addBottom(st, target);
}

int main()
{

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    reverseStack(st);

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}