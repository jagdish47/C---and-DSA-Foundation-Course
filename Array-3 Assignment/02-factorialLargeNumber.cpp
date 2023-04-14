#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{

    int x = 50;

    int fact = 1;

    vector<int> arr;

    for (int i = 1; i <= x; i++)
    {
        fact *= i;
        }

    cout << "Factorial is : " << fact << endl;

    return 0;
}