#include <bits/stdc++.h>
using namespace std;

int main()
{

    string name = "Jagdish Kumawat";

    for (int i = 0; i < name.size(); i++)
    {

        if (name[i] == 'a')
        {
            name[i] = 'O';
        }
    }

    cout << name << endl;

    return 0;
}