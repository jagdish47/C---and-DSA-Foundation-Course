#include<iostream>
using namespace std;

int main() {


    int arr[] = {2, 3, 4, 5, 2, 3, 5, 7, 1};
    int size = *(&arr + 1) - arr;

    int totalSum = 0;
    for(int i = 0; i < size; i++){
        totalSum += arr[i];
    }

    cout<<totalSum<<endl;

    int prefix = 0;
    
    for(int i = 0; i < size; i++){
     
        prefix = prefix + arr[i];

        int sufix = totalSum - prefix;

        if(prefix == sufix){
            cout<<prefix<<" "<<sufix;
            cout<<" equal"<<endl;
        }else{
            cout<<prefix<<" "<<sufix;
            cout<<" not equal"<<endl;
        }


    }

    return 0;
}