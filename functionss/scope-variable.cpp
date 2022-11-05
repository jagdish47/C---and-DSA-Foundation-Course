// #include <iostream>
// using namespace std;

// int main()
// {

//     int apple = 5; // apple is accessible anywhere inside tha main function these also called local variable
//     cout << apple << endl;

//     {
//         int banana = 10; // banana is only accessible in this {} bracket we can't access outsie
//         cout << apple << endl;
//     }

//     // cout << banana << endl; //we get error because banana is not declare in scope
//     return 0;
// }

// ---global scope---

#include <iostream>
using namespace std;

int global = 10; // now this is global variable which is accessible anywhere in program

void newFunc()
{
    cout << global << endl;
}

int main()
{

    cout << global << endl;
    newFunc();
    return 0;
}
