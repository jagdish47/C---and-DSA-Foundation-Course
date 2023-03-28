#include <iostream>
using namespace std;

bool search(rhjhf, size, start, target)
{
    return true;
}

int main()
{

    int arr[] = {4, 5, 6, 4, 7, 8, 9, 10};
    int start = 0;
    int size = *(&arr + 1) - arr;
    int target = 9;

    cout << search(arr, size, start, target) << endl;

    return 0;
}