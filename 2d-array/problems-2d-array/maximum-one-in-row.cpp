#include<iostream>
#include<vector>
using namespace std;

int findMaximumOnesRow(vector<vector<int>> V){


    int leftMostOne = -1;
    int maxOnesRow = -1;

     int j = V[0].size()-1;

    // find left most in 0th row
    while(j>=0 && V[0][j] == 1){
        leftMostOne = j;
        maxOnesRow = 0;
        j--;
    }


    // check in other rows
    for(int i = 1; i < V.size(); i++){

        while(j>=0 && V[0][j] == 1){
            leftMostOne = j;
            j--;
            maxOnesRow = i;
        } 
    }

    return maxOnesRow;
}

int main(){
    int m,n;
    cin>>m>>n;


    vector<vector<int>>vec(n, vector<int>(m));

    for(int i = 0; i < m; i++){

        for(int j = 0; j < n; j++){

            cin>>vec[i][j];
        }
    }

    cout<<findMaximumOnesRow(vec);



    // for(int i = 0; i < vec.size(); i++){

    //     for(int j = 0; j < vec[i].size(); j++){
    //         cout<<vec[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}