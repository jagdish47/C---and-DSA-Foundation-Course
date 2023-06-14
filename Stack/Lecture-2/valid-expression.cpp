#include <bits/stdc++.h>
#include <stack>
using namespace std;

bool validExpression(string str)
{

    stack<char> st;

    for (auto &ch : str)
    {

        if (ch == ')')
        {

            char top = st.top();
            st.pop();
            bool flag = true;

            while (!st.empty() && top != '(')
            {
                if (top == '+' || top == '-' || top == '/' || top == '*')
                {
                    flag = false;
                }

                top = st.top();
                st.pop();
            }

            if (flag == true)
            {
                return true;
            }
        }
        else
        {
            st.push(ch);
        }
    }

    return false;
}

int main()
{

    string str = "(a+b)";

    bool ans = validExpression(str);

    if (ans)
    {
        cout << "Valid Expression" << endl;
    }
    else
    {
        cout << "Invalid Expression" << endl;
    }
    return 0;
}