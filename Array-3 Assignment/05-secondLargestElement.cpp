#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr{1, 6, 3, 4, 6, 3, 7, 8};

    int firstMaximum = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {

        if (arr[i] > firstMaximum)
        {
            firstMaximum = arr[i];
        }
    }

    int secMaximum = -1;

    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[i] > secMaximum && arr[i] != firstMaximum)
        {
            secMaximum = arr[i];
        }
    }

    cout << "Second Maximum : " << secMaximum << endl;
}