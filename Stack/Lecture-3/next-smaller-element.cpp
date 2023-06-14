#include <bits/stdc++.h>
#include <stack>
using namespace std;

vector<int> nextSmallerElement(vector<int> &vec)
{

    vector<int> ans;
    stack<int> st;
    st.push(-1);

    for (int i = vec.size() - 1; i >= 0; i--)
    {

        if (vec[i] > st.top())
        {
            ans.insert(ans.begin(), st.top());
            st.push(vec[i]);
        }
        else if (vec[i] < st.top())
        {

            while (st.top() > vec[i])
            {
                st.pop();
            }

            ans.insert(ans.begin(), st.top());
            st.push(vec[i]);
        }
    }

    return ans;
}

int main()
{

    vector<int> vec{2, 1, 4, 3};

    vector<int> ans = nextSmallerElement(vec);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}