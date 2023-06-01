#include <bits/stdc++.h>
using namespace std;

class Employee
{
public:
    string name;
    int age;
    int salary;

    // -Constructor called automatically when object is create.
    // -Consturctor will create automatically when you dont __create_task_state
    // -Constructor we use to initialize the value of property
    // -Constructor name same as Class name.

    Employee()
    {

        cout << "Constructor Called Default" << endl;

        this->name = "Jagdish Kumawat";
        this->age = 24;
        this->salary = 31200;
    }

    void Designation()
    {
        cout << "JavaScript Technical Consultant" << endl;
    }

    void Work()
    {
        cout << "Work on Revechat" << endl;
    }
};

int main()
{

    // Dynamically created Employee Class.
    Employee *ep1 = new Employee();

    cout << ep1->name << endl;

    return 0;
}