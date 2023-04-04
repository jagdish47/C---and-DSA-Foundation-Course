#include <iostream>
#include <cmath>
using namespace std;

int gretestCommonDivisor(int num1, int num2)
{

    int mini = min(num1, num2);

    for (int i = mini; i >= 0; i--)
    {

        if ((num1 % i == 0) && (num2 % i == 0))
        {
            return i;
        }
    }

    return 0;
}

int main()
{

    int num1 = 24;
    int num2 = 60;

    int ans = gretestCommonDivisor(num1, num2);

    cout << "GCD : " << ans << endl;

    return 0;
}