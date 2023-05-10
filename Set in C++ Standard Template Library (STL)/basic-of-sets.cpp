#include <bits/stdc++.h>
using namespace std;

int main()
{

    // syntax - set<datatype>set_name;

    set<char> ch; // empty set

    // inserting element inside set
    ch.insert('A');
    ch.insert('B');
    ch.insert('C');
    ch.insert('A');

    // iterating sets
    for (auto x : ch)
    {
        // cout << x << endl;
    }

    // defining sets with values

    set<int> num = {3, 24242, 43, 34, 34, 3, 24, 324, 23, 23432, 321, 1, 312, 3456, 435, 3454};
    // by default sets are in ascending order

    for (auto n : num)
    {
        // cout << n << " ";
    }

    set<int, greater<int>> desc = {5, 3, 3, 35, 34, 534, 5, 3534, 5, 242, 34, 37, 35, 543, 5, 346, 35, 635};

    for (auto x : desc)
    {
        // cout << x << " ";
    }
    cout << endl;

    // using for loop to print the set
    for (auto itr = desc.begin(); itr != desc.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    return 0;
}