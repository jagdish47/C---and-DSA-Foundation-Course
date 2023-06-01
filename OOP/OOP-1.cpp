#include <bits/stdc++.h>
using namespace std;

class Animal
{
    // as we know we can not get the values of private outside the class so whenever we want value outside from class we use getter and setter method.

private:
    int weight = 80;

public: // Public means you can access it inside the class or outside the class as well
    string name = "Rockey";
    int age = 5;

    void setWeight(int w)
    {
        weight = w;
    }

    int getWeight()
    {
        return weight;
    }

    void eat()
    {
        cout << "Whatever the name is Eating a lot " << endl;
    }

    void sleep()
    {
        cout << "Whatever the name is sleeping" << endl;
    }
};

int main()
{

    Animal rockey; // this is called static memory allocation

    cout << rockey.name << endl;
    cout << rockey.age << endl;

    rockey.sleep();
    rockey.eat();

    cout << "get Weight " << rockey.getWeight() << endl;
    rockey.setWeight(75);

    cout << "get weight again " << rockey.getWeight() << endl;
    return 0;
}