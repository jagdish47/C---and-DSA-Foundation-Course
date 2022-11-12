#include <iostream>
using namespace std;

int main()
{

    int arr[] = {-10, -2, 2, 4, 5, 6};
    int size = *(&arr + 1) - arr;

    int square[size];

    int left = 0;
    int right = size - 1;

    int i = 0;

    while (left <= right)
    {

        if (abs(arr[left]) >= abs(arr[right]))
        {
            square[i] = arr[left] * arr[left];
            left++;
            i++;
        }

        if (abs(arr[left] < abs(arr[right])))
        {
            square[i] = arr[right] * arr[right];
            right--;
            i++;
        }
    }

    for(int i = size-1; i >= 0; i--){
        cout<<square[i]<<" ";
    }
    cout<<endl;

    return 0;
}