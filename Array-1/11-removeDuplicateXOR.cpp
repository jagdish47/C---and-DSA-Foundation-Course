#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr{1, 1, 2, 3, 3, 2, 10, 1, 2, 2, 1};

    int remover = 0;

    for (int i = 0; i < arr.size(); i++)
    {

        remover = remover ^ arr[i];
    }
    cout << remover << " ";
    cout << endl;

    return 0;
}