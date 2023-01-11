#include <iostream>
using namespace std;

void mul(int num, int start, int k)
{

    if (start > k)
    {
        return;
    }

    int ans = num * start;
    cout << ans << " ";
    mul(num, start + 1, k);
}

int main()
{

    int num = 12;
    int start = 1;
    int k = 5;

    mul(num, start, k);

    return 0;
}