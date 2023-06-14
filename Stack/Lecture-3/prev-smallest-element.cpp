#include <bits/stdc++.h>
#include <stack>
using namespace std;

vector<int> prevSmallestElement(vector<int> &vec)
{

    vector<int> ans(vec.size());
    stack<int> st;
    st.push(-1);

    // everything is same only direction of loop changed
    for (int i = 0; i < vec.size(); i++)
    {

        int curr = vec[i];

        while (curr <= st.top())
        {
            st.pop();
        }

        ans[i] = st.top();
        st.push(curr);
    }

    return ans;
}

int main()
{

    vector<int> vec{2, 1, 4, 3};

    vector<int> ans = prevSmallestElement(vec);

    for (int i = 0; i < ans.size(); i++)
    {

        cout << ans[i] << " ";
    }

    cout << endl;

    return 0;
}