#include<iostream>
using namespace std;

int main() {

    int costPrice;
    int sellingPrice;

    cout<<"enter cost price : ";
    cin>>costPrice;

    cout<<"enter selling price : ";
    cin>>sellingPrice;


    if(sellingPrice > costPrice){
        cout<<"amazing! you got Profilt of "<<sellingPrice - costPrice<<endl;
    }
    else if(costPrice  > sellingPrice){
        cout<<"ahhh! you are in Loss of "<<costPrice - sellingPrice<<endl;
    }
    else{
        cout<<"neither got loss nor profit"<<endl;
    }



    return 0;
}
