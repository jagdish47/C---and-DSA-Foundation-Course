#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> vec{100, 2, 3, 4, 3, 2, 2, 2, 2, 2};

    cout << "front " << vec.front() << endl;
    cout << "end " << vec.back() << endl;

    cout << vec.size() << endl;
    cout << vec.max_size() << endl;

    cout << vec.capacity() << endl;

    cout << "empty() : " << vec.empty() << endl;

    // for (int i = 0; i < vec.capacity(); i++)
    // {
    //     cout << vec[i] << endl;
    // }

    // vec.resize(20, 100);

    // for (int i = 0; i < vec.size(); i++)
    // {

    //     cout << vec[i] << " ";
    // }

    // cout << endl;
    return 0;
}