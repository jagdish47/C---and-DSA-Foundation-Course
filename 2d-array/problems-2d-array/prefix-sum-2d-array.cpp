#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<vector<int>> vect{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 1, 2, 3}
    };

    vector<vector<int>> nvect(vect.size(), vector<int>(vect[0].size()));

    for(int i = 0; i < vect.size(); i++){
        int sum = 0;
        for(int j = 0; j < vect[i].size(); j++){
            sum += vect[i][j];
            nvect[i][j] = sum;
        }
    }

    for(int i = 0; i < nvect.size(); i++){
        for(int j = 0; j < nvect[i].size(); j++){
            cout<<nvect[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}