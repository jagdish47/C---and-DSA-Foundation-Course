#include<iostream>
using namespace std;

int main(){

    int a, b;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;

// printing a and b
    cout<<"older a : "<<a<<endl;
    cout<<"older b : "<<b<<endl;

    int temp;
    temp = a;
    a = b;
    b = temp;

    // In the above program, the temp variable is assigned the value of the (a) variable.
    // Then, the value of the (a) variable is assigned to the (b) variable.
    // Finally, the temp (which holds the initial value of (a)) is assigned to (b). This completes the swapping process.

    cout<<"new a : "<<a<<endl;
    cout<<"new b : "<<b<<endl;



    return 0;
}