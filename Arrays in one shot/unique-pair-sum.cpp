#include <iostream>
using namespace std;

int main()
{

    int arr[] = {2, 2, 2, 2};
    int k = 4;
    int s = 4;

    int i = 0;
    int j = s - 1;

    int answer = 0;

    while (i < j)
    {
        if (arr[i] + arr[j] == k)
        {
            answer += 1;
            i++;
            j--;
        }
        else if (arr[i] + arr[j] < k)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    cout << answer << endl;
    return 0;
}