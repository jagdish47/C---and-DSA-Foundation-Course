#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {10, 34, 34, 6, 4};

    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;
    // cout << arr[3] << endl;
    // cout << arr[4] << endl;

    // cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << endl;

    int a[] = {10, 23, 3, 5, 6, 7, 8, 5, 4, 3, 5, 4, 3};
    // if we are not giving size than we must have to give some value to it otherwise it generate an arra

    // ACCESSING ELEMENT USING FOR LOOP

    for (int i = 0; i < 13; i++)
    {

        cout << a[i] << " ";
    }
    return 0;
}