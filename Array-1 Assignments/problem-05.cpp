// WAP to find the smallest missing positive element in the sorted Array that contains only
// positive elements.

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sumOfNaturalNumber = (arr[size - 1] * (arr[size - 1] + 1) / 2);

    int totalOfArr = 0;

    for (int i = 0; i < size; i++)
    {
        totalOfArr += arr[i];
    }
    cout << sumOfNaturalNumber << endl;
    cout << "Missing Element is : " << sumOfNaturalNumber - totalOfArr << endl;

    return 0;
}