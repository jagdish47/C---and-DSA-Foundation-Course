#include <bits/stdc++.h>
using namespace std;

void print(int count)
{

    if (count == 5)
    {
        return;
    }

    cout << count << endl;
    print(count + 1);
    cout << "ended " << count << endl;
}

int main()
{
    int count = 0;
    print(count);
    return 0;
}