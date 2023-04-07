// Write a function that takes the radius of a circle as an argument and returns its area.

// radius = circum / (2 * 3.14)

#include <iostream>
using namespace std;

float radiusOfCircle(int cir)
{

    float radius = cir / (2 * 3.14);
    return radius;
}

int main()
{

    int num;
    cout << "enter circumference : ";
    cin >> num;

    float ans = radiusOfCircle(num);
    cout << ans << endl;

    return 0;
}