#include<iostream>
using namespace std;

int main() {

    int x;
    cout<<"enter x : ";
    cin>>x;


    switch(x) {

        case 1 :
            cout<<"Monday ";
            break;
        
        case 2 :
            cout<<"Tuesday";
            break;

        case 3 :
            cout<<"Wednesday";
            break;
        
        case 4 : 
            cout<<"Thursday";
            break;
        
        case 5 :
            cout<<"Friday";
            break;

        case 6 :
            cout<<"Saturday";
            break;

        case 7 :
            cout<<"Sunday";
            break;

        default :

            cout<<"entered Invalid number";
    }

    return 0;
}