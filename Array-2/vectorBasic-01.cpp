#include <iostream>
#include <vector> //to use vector we have to include vector file so we can use all the functionlity of vector.
using namespace std;

int main()
{

    vector<int> v; // this is how we create vector.

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    // v[1] = 10; //Don't do this sometimes it give you garbage value. so push_back() is recommended way to do that.

    cout << v[0] << endl;
    cout << v[1] << endl;
    cout << v[2] << endl;
    cout << v[3] << endl;
    cout << v[4] << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
    }
    return 0;
}

// v.size() //it's an function we use so we can know the total element availble inside array
// v.capacity() //it told you what is capacity of vector right now. whenever vector become full it will double the size of it's