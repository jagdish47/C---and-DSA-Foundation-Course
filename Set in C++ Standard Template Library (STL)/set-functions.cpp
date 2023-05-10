#include <bits/stdc++.h>
using namespace std;

int main()
{

    set<int> s;
    s.insert(343);
    s.insert(34);
    s.insert(43);
    s.insert(33);
    s.insert(3);

    cout << s.empty() << endl;
    cout << s.max_size() << endl;
    cout << s.size() << endl;

    return 0;
}