#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};

    int oddSum = 0;
    int evenSum = 0;


    for(int i = 0; i < vec.size(); i++){

        if(i % 2 == 0){
            evenSum += vec[i];
        }
        else{
            oddSum += vec[i];
        }
    }

    cout<<oddSum - evenSum<<endl;
}