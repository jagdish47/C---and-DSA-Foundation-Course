#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{

    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *left = new int[len1];
    int *right = new int[len2];

    int k = s;

    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k];
        k++;
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k];
        k++;
    }

    // merge Logic

    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while (leftIndex < len1 && rightIndex < len2)
    {
        if (left[leftIndex] < right[rightIndex])
        {
            arr[mainArrayIndex++] = left[leftIndex++];
        }
        else
        {
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }

    while (leftIndex < len1)
    {
        arr[mainArrayIndex++] = left[leftIndex++];
    }

    while (rightIndex < len2)
    {
        arr[mainArrayIndex++] = right[rightIndex++];
    }
}

void mergesort(int *arr, int s, int e)
{

    //-if s == e means only single element is available.
    //-if s > e means invalid array the start never greate than end at starting.
    // BASE CASE
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;

    mergesort(arr, s, mid);

    mergesort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main()
{
    int arr[] = {6, 6, 7, 8, 5, 34, 8, 8, 67, 5, 4, 3, 23, 2, 45, 65, 7, 8, 9, 9};
    int n = 20;

    int s = 0;
    int e = n - 1;

    mergesort(arr, s, e);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}