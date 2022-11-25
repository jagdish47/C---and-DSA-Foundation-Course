#include<iostream>
#include<vector>
using namespace std;

void rotateMatrix(vector<vector<int>> vec) {

    for(int i = 0; i < vec.size(); i++){

        for(int j = vec[i].size()-1; j >= 0; j--){
            cout<<vec[j][i]<<" ";

        }
        cout<<endl;
    }
}

int main() {

    int m,n;
    cin>>m>>n;

    vector<vector<int>>V(n, vector<int>(m));;


    for(int i = 0; i < m; i++){

        for(int j = 0; j < n; j++){

            cin>>V[i][j];
        }
    }

    rotateMatrix(V);
}