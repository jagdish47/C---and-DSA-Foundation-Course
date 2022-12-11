#include <iostream>
using namespace std;

int main()
{

    int x, y;
    cin >> x >> y;

    int *ptr_x = &x;
    int *ptr_y = &y;

    int result;
    int *ptr_result = &result;

    *ptr_result = *ptr_x + *ptr_y;

    cout << result << endl;

    cout << *ptr_result << endl;

    return 0;
}