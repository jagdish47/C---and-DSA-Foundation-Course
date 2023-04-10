#include <iostream>
using namespace std;

int main()
{

    int marks[] = {99, 22, 79, 45, 33, 23, 88};

    for (int i = 0; i < 7; i++)
    {
        if (marks[i] < 35)
        {
            cout << i + 1 << endl;
        }
    }

    return 0;
}