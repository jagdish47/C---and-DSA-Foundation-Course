#include <iostream>
using namespace std;

int main()
{

    int arr[] = {
        10,
        20,
        30,
        40,
    };
    int size = sizeof(arr) / sizeof(arr[0]);

    bool flag = false;

    for (int i = 0; i < size; i++)
    {

        for (int j = i + 1; j < size; j++)
        {

            if (arr[i] == arr[j])
            {
                flag = true;
            }
        }
    }

    if (flag)
    {
        cout << "Duplicate available" << endl;
    }
    else
    {
        cout << "Duplicate doesn't available" << endl;
    }

    return 0;
}