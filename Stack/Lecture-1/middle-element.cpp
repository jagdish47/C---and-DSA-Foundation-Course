#include <bits/stdc++.h>
#include <stack>
using namespace std;

void findMiddle(stack<int> &st, int totalSize)
{

    if (st.size() == (totalSize / 2) + 1)
    {
        cout << st.top() << endl;
        return;
    }

    if (st.empty())
    {
        cout << "not sufficient element to find the middle" << endl;
        return;
    }

    int temp = st.top();
    st.pop();

    findMiddle(st, totalSize);

    st.push(temp);
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
    st.push(70);

    int totalSize = st.size();

    findMiddle(st, totalSize);

    return 0;
}