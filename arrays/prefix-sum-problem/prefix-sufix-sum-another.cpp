#include<iostream>
#include<vector>
using namespace std;

bool checkPrefixSufixSum(vector<int> v){
    int sum = 0;

    for(int i = 0; i<v.size(); i++){
        sum += v[i];
    }

    int prefix = 0;

    for(int i = 0; i<v.size(); i++){

        prefix += v[i];
        int sufix = sum - prefix;

        if(prefix == sufix){
            return true;
        }
    }

    return false;
}

int main() {

    int n;
    cin>>n;

    vector<int> v;

    for(int i = 0; i < n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }


    cout<<checkPrefixSufixSum(v)<<endl;

    

    return 0;
}