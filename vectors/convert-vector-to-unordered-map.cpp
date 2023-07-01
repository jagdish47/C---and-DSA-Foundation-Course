#include <bits/stdc++.h>
using namespace std;

int main()
{

    // vector<int> vec{2, 323, 2, 12, 323, 13, 12, 3, 13};

    // unordered_map<int, int> umap;

    // // umap[vec[0]] = 1;
    // // umap[vec[1]] = 2;
    // // umap[vec[2]] = 3;
    // // umap[vec[3]] = 4;
    // // umap[vec[4]] = 5;
    // // umap[vec[5]] = 6;
    // // umap[vec[6]] = 7;
    // // umap[vec[7]] = 8;
    // // umap[vec[8]] = 9;

    // for (int i = 0; i < vec.size(); i++)
    // {

    //     umap[i] = vec[i];
    // }

    // for (auto x : umap)
    // {

    //     cout << x.first << " : " << x.second << endl;
    // }

       // QUESTION------------------------------------------------------------------------------------

    vector<int> A{1, 2, 5, 4, 0, 2};

    unordered_map<int, int> umap;

    for (int i = 0; i < A.size(); i++)
    {

        umap[A[i]]++;
    }

    for (auto x : umap)
    {
        cout << x.first << " : " << x.second << endl;
    }

    return 0;
}