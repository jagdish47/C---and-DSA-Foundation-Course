//  Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = *(&arr + 1) - arr;

    int odd = 0;
    int even = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout << "even : " << even << endl;
    cout << "odd : " << odd << endl;

    return 0;
}