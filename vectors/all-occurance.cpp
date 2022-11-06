#include<iostream>
#include<vector>
using namespace std;


int main() {

    vector<int> v = {1, 2, 4, 2, 4, 5, 3, 2, 3, 4, 5};
    int key = 2;


    int totalOccurance = 0;

    for(int i = 0; i < v.size(); i++){
        if(v[i] == key){
            totalOccurance += 1;
        }
    }

    if(totalOccurance == 0){
        totalOccurance =  -1;
    }


    cout<<totalOccurance<<endl;

    return 0;
}