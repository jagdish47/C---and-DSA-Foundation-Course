#include <iostream>
#include <vector>
using namespace std;

void change(vector<int> vec)
{

    vec[0] = 100;
    vec[1] = 500;
}
void print(vector<int> vec)
{

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

void changeref(vector<int> &vec)
{

    vec[0] = 100;
    vec[1] = 500;
}

int main()
{

    vector<int> v = {10, 20, 30, 40, 50};

    print(v);
    change(v);
    print(v);
    changeref(v);
    print(v);

    return 0;
}

// Whenever your passing vector to function it pass as pass by value, it create new vector if we modify in that function than it won't affect to original vector

// if we use & and vector name than it inside that function array also point to same vector. if we change inside function vector it will change the original vector also.