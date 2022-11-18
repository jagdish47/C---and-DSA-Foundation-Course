#include <iostream>
using namespace std;
void addition(int, int); // function prototype

int main()
{

    addition(10, 20);

    return 0;
}

void addition(int a, int b)
{
    cout << a + b << endl;
}