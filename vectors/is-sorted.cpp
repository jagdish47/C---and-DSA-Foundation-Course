#include<iostream>
#include<vector>
using namespace std;


int main() {

    vector<int> vec = {1, 2, 3, 4, 5, 6};
    bool isSorted = true;

    for(int i = 1; i < vec.size(); i++){

        if(vec[i] <= vec[i-1]){
            isSorted = false;
            break;
        }
    }

    cout<<isSorted<<endl;


    return 0;
}