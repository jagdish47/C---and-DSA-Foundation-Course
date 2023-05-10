#include <bits/stdc++.h>
using namespace std;

int main()
{

    pair<int, int> twoPair;

    twoPair.first = 10;
    twoPair.second = 20;

    cout << "{" << twoPair.first << "," << twoPair.second << "}" << endl;

    pair<char, char> ch('X', 'Y');
    cout << ch.first << endl;
    cout << ch.second << endl;

    return 0;
}