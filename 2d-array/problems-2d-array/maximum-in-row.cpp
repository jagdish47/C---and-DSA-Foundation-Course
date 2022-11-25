#include<iostream>
#include<vector>
using namespace std;

int maximumOnesRow(vector<vector<int>> V){

    int max = -1;

    for(int i = 0; i < V.size(); i++){

        for(int j = 0; j < V[i].size(); j++){

            if(V[i][j] == 1){
                int ans = V[i].size() - j;

                if(max < ans){
                    max = ans;
                }
            }
            break;
        }
    }

    return max;
}

int main(){

    int n,m; 
    cin>>n>>m;

    // vector and initializing the size
    vector<vector<int>> vec (n, vector<int>(m));

    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){

            cin>>vec[i][j];

        }
    }

    int res = maximumOnesRow(vec);
    cout<<res<<endl;

    // for(int i = 0; i < n; i++){

    //     for(int j = 0; j < m; j++){
    //         cout<<vec[i][j]<<" ";
    //     }

    //     cout<<endl;
    // }


return 0;
}
        