#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{1, 3, 2, 7, 5, 9, 4, 3};
    int target = 6;

    int count = 0;

    for (int i = 0; i < arr.size(); i++)
    {

        for (int j = i + 1; j < arr.size(); j++)
        {

            for (int k = j + 1; k < arr.size(); k++)
            {

                if (arr[i] + arr[j] + arr[k] == target)
                {
                    count++;
                }
            }
        }
    }

    cout << "Total Triplets are : " << count << endl;

    // -------------------------------------------------------------------------------------------

    // int first = 0;
    // int second = 1;

    // int count = 0;

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     int third = arr.size() - 1;

    //     while (second < third)
    //     {
    //         if (arr[first] + arr[second] + arr[third] == target)
    //         {
    //             count++;
    //         }
    //         third--;
    //     }

    //     first++;
    //     second++;
    // }

    // cout << "Number of triplet : " << count << endl;

    return 0;
}