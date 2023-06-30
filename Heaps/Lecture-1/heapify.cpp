#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int index = i;
    int leftIndex = 2 * index;
    int rightIndex = 2 * index + 1;
    int largest = index;

    if (leftIndex <= n && arr[largest] < arr[leftIndex])
    {
        largest = leftIndex;
    }

    if (rightIndex <= n && arr[largest] < arr[rightIndex])
    {
        largest = rightIndex;
    }

    if (index != largest)
    {
        swap(arr[index], arr[largest]);
        index = largest;
        heapify(arr, n, i);
    }
}

void buildHeap(int arr[], int n)
{

    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
}

int main()
{

    int arr[] = {-1, 12, 14, 13, 17, 15};
    int size = 5;

    buildHeap(arr, size);

    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}