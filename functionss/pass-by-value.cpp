#include <iostream>
using namespace std;
void changeValue(int a);

int main()
{

    int a = 100;
    cout << a << endl; // a = 100
    changeValue(a);    // function call and we send a not actual a not its copy will sent
    cout << a << endl; // a = 100 value is not changed still 100
    return 0;
}

void changeValue(int a)
{
    a = 200; // value is changed only in this scope because a copy of value is send not actual value has been send
    cout << a << endl;
}