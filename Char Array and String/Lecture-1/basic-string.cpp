#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{

    char name[100];

    cout << "enter your name : " << endl;
    // cin >> name; whenever space,enter,tab comes it wont read next.

    // getline(cin, name);
    cin.getline(name, 100);

    cout << name << endl;

    return 0;
}