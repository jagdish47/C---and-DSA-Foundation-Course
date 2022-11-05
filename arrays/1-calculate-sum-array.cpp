#include<iostream>
using namespace std;

int main() {

    int num[] = {10, 20, 30, 4, 5, 3};
    int size = sizeof(num) / sizeof(num[0]);

    int sum = 0;

    // for(int i = 0; i < size; i++){
    //     sum += num[i];
    // }

    for(int ele : num){
        sum += ele;
    }
    cout<<sum<<endl;
    return 0;
}