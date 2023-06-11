#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main()
{

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    /*
    cout << "top : " << st.top() << endl;
    cout << "size : " << st.size() << endl;
    cout << "is empty : " << st.empty() << endl;

    cout << " -- removing element -- " << endl;
    st.pop();

    cout << "top : " << st.top() << endl;
    cout << "size : " << st.size() << endl;
    cout << "is empty : " << st.empty() << endl;

    st.pop();
    st.pop();

    cout << "top : " << st.top() << endl;
    cout << "size : " << st.size() << endl;
    cout << "is empty : " << st.empty() << endl;
    */

    stack<int> one;

    one.push(10);
    one.push(20);
    one.push(30);
    one.push(40);
    one.push(50);
    one.push(60);

    while (!one.empty())
    {
        cout << one.top() << endl;
        one.pop();
    }

    return 0;
}