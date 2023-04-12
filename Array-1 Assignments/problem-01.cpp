// Calculate the product of all the elements in the given array.

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int product = 1;

    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }

    cout << "Product is : " << product << endl;

    return 0;
}