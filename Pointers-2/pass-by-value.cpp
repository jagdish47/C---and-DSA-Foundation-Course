#include <bits/stdc++.h>
using namespace std;

void letSwap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{

    int x = 10;
    int y = 20;

    cout << "before : " << x << " " << y << endl;

    letSwap(x, y);

    cout << "after : " << x << " " << y << endl;

    return 0;
}