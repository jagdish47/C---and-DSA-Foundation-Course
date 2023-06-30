#include <bits/stdc++.h>
using namespace std;

class Heap
{

public:
    int arr[100];
    int size;

    Heap()
    {
        size = 0;
    }

    void insert(int value)
    {

        size = size + 1;
        int index = size;

        arr[index] = value;

        while (index > 1)
        {
            int parentIndex = index / 2;

            if (arr[index] > arr[parentIndex])
            {
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            }
            else
            {
                break;
            }
        }
    }

    int deleteRoot()
    {
        int ans = arr[1];

        arr[1] = arr[size];
        size--;

        int index = 1;

        while (index < size)
        {
            int left = index * 2;
            int right = index * 2 + 1;

            int largest = index;

            if (left < size && arr[largest] < arr[left])
            {
                largest = left;
            }

            if (right < size && arr[largest] < arr[right])
            {
                largest = right;
            }

            if (largest == index)
            {
                return ans;
            }
            else
            {
                swap(arr[index], arr[largest]);
                index = largest;
            }
        }
    }
};

int main()
{
    Heap h;
    h.arr[0] = -1;
    h.arr[1] = 100;
    h.arr[2] = 50;
    h.arr[3] = 60;
    h.arr[4] = 40;
    h.arr[5] = 45;

    h.size = 5;

    cout << "Printing the Heap " << endl;

    for (int i = 0; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    cout << endl;

    h.insert(120);

    for (int i = 0; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    cout << endl;
    return 0;
}