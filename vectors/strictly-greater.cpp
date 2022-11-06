#include<iostream>
#include<vector>
using namespace std;


int main() {

    vector<int> v = {1, 2, 3, 4, 2, 3, 4, 1, 34, 5, 3, 2, 4, 5, 6, 7, 78, 65, 34, 21};
    int key = 20;

    int count = 0;


    for(int ele : v){

        if(ele > key){
            count++;
        }
    }

    cout<<count<<endl;



    return 0;
}