#include<iostream>
#include<vector>
using namespace std;


int main() {

    // if size not define

    // vector<int> v;

    // for(int i = 0; i < 5; i++){
    //     int element;
    //     cin>>element;
    //     v.push_back(element);
    // }


    // if size defined
    vector<int> v(5);

    for(int i = 0; i < v.size(); i++){
        cin>>v[i];
    }


    // using for loop
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }


    // using foreach loop
    for(int ele : v){
        cout<<ele<<endl;
    }


    // using while loop
    int i = 0;

    while(i < v.size()){
        cout<<v[i]<<endl;
        i++;
    }


}