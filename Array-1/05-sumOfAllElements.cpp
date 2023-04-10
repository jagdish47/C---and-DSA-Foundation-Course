#include <iostream>
using namespace std;

int main()
{

    int arr[] = {5, 5, 5, 10, 10, 100};
    int size = sizeof(arr) / sizeof(arr[0]);

    int arrTotal = 0;

    for (int i = 0; i < size; i++)
    {
        arrTotal += arr[i];
    }

    cout << "Total of array elements is : " << arrTotal << endl;

    return 0;
}