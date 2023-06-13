#include <bits/stdc++.h>
#include <stack>
using namespace std;

bool validParenthesis(string str)
{

    stack<char> st;

    for (int i = 0; i < str.size(); i++)
    {

        char ch = str[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }

        else
        {

            if (!st.empty()) // if here stack is empty than we do not have any open bracket.
            {

                char topCh = st.top();

                if (ch == ')' && topCh == '(')
                {
                    st.pop();
                }

                else if (ch == '}' && topCh == '{')
                {
                    st.pop();
                }

                else if (ch == ']' && topCh == '[')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }

    if (st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    string str = "(){";

    bool ans = validParenthesis(str);

    if (ans)
    {
        cout << "it's an Valid Parenthesis" << endl;
    }
    else
    {
        cout << "it's an Invalid Parenthesis" << endl;
    }

    return 0;
}