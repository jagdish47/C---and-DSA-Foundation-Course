#include <iostream>
using namespace std;

void fun(int start, int end)
{
    if (start == end)
    {
        return;
    }

    cout << start << " ";
    fun(start + 1, end);
}

int main()
{

    int start = 1;
    int end = 10;

    fun(start, end);

    return 0;
}