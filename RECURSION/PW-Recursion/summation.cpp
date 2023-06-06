// #include <bits/stdc++.h>
// using namespace std;

// int summation(int n, int sum)
// {

//     if (n == 0)
//     {
//         return sum;
//     }

//     return summation(n - 1, sum += n);
// }

// int main()
// {

//     int n = 5, sum = 0;

//     cout << summation(n, sum) << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int summation(int n)
{

    if (n == 1)
    {
        return 1;
    }

    return n + summation(n - 1);
}

int main()
{
    int n = 5;
    cout << summation(n) << endl;
    return 0;
}