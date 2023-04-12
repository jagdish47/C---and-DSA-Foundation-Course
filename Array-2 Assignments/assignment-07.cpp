// If an array arr contains n elements, then check if the given array is a palindrome or not .

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v{1, 1, 1, 1};

    int start = 0;
    int end = v.size() - 1;

    bool flag = true;

    while (start <= end)
    {

        if (v[start] == v[end])
        {
            start++;
            end--;
        }
        else
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "Given Array is Palindrome." << endl;
    }
    else
    {
        cout << "Given array is not Palindrome." << endl;
    }

    return 0;
}