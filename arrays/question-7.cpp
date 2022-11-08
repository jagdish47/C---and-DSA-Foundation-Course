// Rotate the given array by K steps where k is non negative
// note - K can be greater than n as well where n is the size of array


#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;

int main() {

    vector<int> v = {1, 2, 3, 4, 5};

    int k = 3;
    k = k % v.size();


    reverse(v.begin(), v.end());
    reverse(v.begin(), v.end()+k);
    reverse(v.begin()+k, v.end());

    for(int ele : v){
        cout<<ele<<" "<<endl;
    }


    return 0;
}