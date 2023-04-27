#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<string> arr{"0123", "0023", "456", "00182", "940", "2901"};

    int maxi = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (stoi(arr[i]) > maxi)
        {
            maxi = stoi(arr[i]);
        }
    }

    cout << "Maximum : " << maxi << endl;

    return 0;
}