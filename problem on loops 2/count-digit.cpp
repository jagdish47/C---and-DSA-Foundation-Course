// count the number of digits for a given number n.

#include<iostream>
using namespace std;

int main() {

    int a = 0;

    int count = 0;

    if(a > 0)
    {
        while(a > 0){
        a = a / 10;
        count++;
        }
    }
    else{
        count = 1;
    }
    

    cout<<count<<endl;

    return 0;
}

