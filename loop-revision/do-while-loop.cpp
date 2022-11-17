#include <iostream>
using namespace std;

int main()
{

    int i = 1;

    do
    {
        cout << "This will execute once, no matter what";
        i++;
    } while (i == 1);

    return 0;
}