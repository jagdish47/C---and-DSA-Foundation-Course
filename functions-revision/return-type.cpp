#include <iostream>
using namespace std;

string welcome(string str)
{
    // return true; return must have same type as function
    return "welcome " + str;
}

int main()
{

    string name = "Jagdish Kumawat";
    cout << welcome(name) << endl;
    return 0;
}