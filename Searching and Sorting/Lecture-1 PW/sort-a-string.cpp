// Sort a string in descresing order of values associated after removal of values smaller than X.

// void bubbleSort(string arr)
// {

//     for (int i = 0; i < arr.size(); i++)
//     {

//         bool swapped = true;

//         for (int j = 0; j < arr.size() - i - 1; j++)
//         {

//             if (arr[j] > arr[j + 1])
//             {
//                 swapped = false;

//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }

//         if (swapped)
//         {
//             break;
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(string &str)
{
    int n = str.size();
    for (int i = 0; i < n; i++)
    {

        bool swapped = true;

        for (int j = 0; j < n - i - 1; j++)
        {
            swapped = false;

            swap(str[j], str[j + 1]);
        }

        if (swapped)
        {
            break;
        }
    }
}

int main()
{

    string str = "XYZABUUIOUIKX";
    string newstr = "";

    for (int i = 0; i < str.size(); i++)
    {

        if (str[i] >= 'X')
        {
            newstr += str[i];
        }
    }

    for (int i = 0; i < newstr.size(); i++)
    {
        cout << newstr[i];
    }

    bubbleSort(newstr);

    for (int i = 0; i < newstr.size(); i++)
    {
        cout << newstr[i];
    }
    cout << endl;
}