#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v{1, 2, 3, 1, 2};

    for (int i = 0; i < v.size(); i++)
    {

        int count = 1;
        for (int j = 0; j < v.size(); i++)
        {

            if (v[i] == v[j])
            {
                count++;
                cout << count << endl;
            }
        }

        if (count == 1)
        {
            cout << v[i] << " " << endl;
            break;
        }
    }

    return 0;
}