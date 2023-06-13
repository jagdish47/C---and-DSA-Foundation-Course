#include <bits/stdc++.h>
#include <stack>
using namespace std;

void insertAtRight(stack<int> &st, int target)
{

    if (st.empty())
    {
        return;
    }

    if (st.top() < target)
    {
        st.push(target);
        return;
    }

    int temp = st.top();
    st.pop();

    insertAtRight(st, target);

    st.push(temp);
}

int main()
{

    stack<int> st;

    st.push(20);
    st.push(40);
    st.push(60);
    st.push(80);
    st.push(100);

    int target = 50;

    insertAtRight(st, target);

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
}