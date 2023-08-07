#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> vec{
        34,
        34,
        5,
        342,
        63,
        4,
        4,
        534,
    };

    unordered_map<int, int> umap;

    for (int i = 0; i < vec.size(); i++)
    {
        umap[vec[i]]++;
    }

    // for (auto itr : umap)
    // {
    //     cout << itr.first << " -> " << itr.second << endl;
    // }

    // searching in unordered map
    //  if (umap.find(54) != umap.end())
    //  {
    //      cout << true << endl;
    //  }
    //  else
    //  {
    //      cout << false << endl;
    //  }

    auto itr = umap.find(5);

    cout << itr->first << endl;

    return 0;
}