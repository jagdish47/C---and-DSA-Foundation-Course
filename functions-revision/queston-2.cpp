// Given ratio of a circle.write a function to print area and circumference of the circle ?

/*
#include <iostream>
using namespace std;

void circle(int ratio)
{
    cout << 3.14 * ratio * ratio << endl; // pie * r * r
    cout << 2 * 3.14 * ratio << endl;     // 2 * pie * r
}
int main()
{

    int ratio;
    cout << "enter ratio : ";
    cin >> ratio;

    circle(ratio);
    return 0;
}
*/

#include <iostream>
using namespace std;

int area(int ratio)
{
    return 3.14 * ratio * ratio; // pie * r * r
}

int circumference(int ratio)
{
    return 2 * 3.14 * ratio; // 2 * pie * r
}
int main()
{

    int ratio;
    cout << "enter ratio : ";
    cin >> ratio;

    cout << "Area of circle is : " << area(ratio) << endl;
    cout << "Circumference of circle is :" << area(ratio) << endl;
    return 0;
}