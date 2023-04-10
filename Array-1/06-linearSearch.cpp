#include <iostream>
using namespace std;

int main()
{

    int arr[] = {34, 64, 55, 6, 34, 64, 43, 23, 10, 34, 53, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 10;

    bool flag = false;

    for (int i = 0; i < size; i++)
    {

        if (arr[i] == target)
        {
            // cout << "index of : " << i << endl;
            flag = true;
            break;
        }
    }

    if (flag)
        cout << "Available" << endl;
    else
        cout << "Not Available" << endl;

    return 0;
}