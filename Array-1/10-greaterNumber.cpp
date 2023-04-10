#include <iostream>
using namespace std;

int main()
{

    int arr[] = {34, 53, 32, 53, 3, 23, 23, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 25;
    int count = 0;

    for (int i = 0; i < size; i++)
    {

        if (arr[i] > target)
        {
            count++;
        }
    }

    cout << "Total number greater than that number : " << count << endl;

    return 0;
}