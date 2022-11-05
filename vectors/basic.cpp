#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;

    cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.push_back(10);

    cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.push_back(20);

    cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.push_back(50);

    cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.push_back(100);

    v.resize(10);
    cout<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();


    cout<<v.size()<<endl;


    return 0;
}
