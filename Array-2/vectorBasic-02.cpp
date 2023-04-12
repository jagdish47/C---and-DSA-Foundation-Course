#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v(5); // we can give initial size of vector like this [0,0,0,0,0] all element's of vector will be zero

    cout << v[0] << endl;
    cout << v[1] << endl;
    cout << v[2] << endl;
    cout << v[3] << endl;
    cout << v[4] << endl;

    vector<int> v(5, 10); // the size of vector is five and default elements will be 10 [10,10,10,10,10]

    return 0;
}