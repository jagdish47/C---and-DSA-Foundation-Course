#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str = "Jagdish Kumawat";
    cout << str << endl;

    cout << str.size() << endl;
    cout << str.length() << endl;

    // for (int i = 0; i < str.size(); i++)
    // {
    //     cout << str[i];
    //     cout << i << " ";
    // }
    // cout << endl;

    // ANOTHER WAY TO LOOP

    // int i = 0;
    // while (str[i] != '\0')
    // {
    //     cout << str[i] << " ";
    //     i++;
    // }
    return 0;
}