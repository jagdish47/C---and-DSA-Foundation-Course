// Input a string of length less than 10 and convert it into integer without using builtin function.

#include <bits/stdc++.h>
#include <typeinfo>
using namespace std;

int main()
{

    string str = "12345";

    int answer = 0;
    int product = 1;

    for (int i = str.size() - 1; i >= 0; i--)
    {

        answer += (str[i] - '0') * product;

        product *= 10;
    }

    cout << answer << endl;
    return 0;
}