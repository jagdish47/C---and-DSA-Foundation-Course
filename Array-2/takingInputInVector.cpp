#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;

    int value;
    cout << "How many element you want to enter in vector : ";
    cin >> value;

    for (int i = 1; i <= value; i++)
    {
        int x;
        cin >> x;

        v.push_back(x);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}