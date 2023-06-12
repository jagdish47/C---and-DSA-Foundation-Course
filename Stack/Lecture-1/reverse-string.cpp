#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main()
{

    string str = "hare krishna";

    stack<char> st;

    for (int i = 0; i < str.size(); i++)
    {

        st.push(str[i]);
    }

    while (!st.empty())
    {

        cout << st.top();
        st.pop();
    }
    cout<<endl;

    return 0;
}