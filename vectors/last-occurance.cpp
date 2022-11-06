#include<iostream>
#include<vector>
using namespace std;


int main() {

    vector<int> v = {1, 45, 3, 5, 3, 5, 6, 3};

    int key = 3;

    // int ans = -1;

    // for(int i = 0; i < v.size(); i++){
    //     if(key == v[i]){
    //         ans = i;
    //     }
    // }


    for(int i = v.size() - 1; i >= 0; i--){
        if(key == v[i]){
            cout<<i<<endl;
            break;
        }
    }


    // cout<<ans<<endl;


    return 0;
}