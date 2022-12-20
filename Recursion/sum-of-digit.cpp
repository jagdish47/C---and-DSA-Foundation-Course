#include <iostream>
using namespace std;

int sumOfDigit(int n)
{
    if (n >= 0 && n <= 9)
    {
        return n;
    }

    int result = sumOfDigit(n % 10) + sumOfDigit(n / 10);

    return result;
}

int main()
{
    int n = 54656;
    int ans = sumOfDigit(n);
    cout << ans << endl;
    return 0;
}