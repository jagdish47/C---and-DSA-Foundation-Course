#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    // create
    unordered_map<string, int> umap;

    // Insert-1
    pair<string, int> p = make_pair("Scorpio", 10);
    umap.insert(p);

    // Insert-2
    pair<string, int> p2("Alto", 2);
    umap.insert(p2);

    // Insert-3
    umap["Foutuner"] = 5;

    // Accessing
    cout << umap.at("Alto") << endl;
    cout << umap.at("Scorpio") << endl;

    cout << umap["Foutuner"] << endl;

    // SEARCH
    cout << umap.count("Scorpio") << endl; // if availabe 1
    cout << umap.count("Innova") << endl;  // not availabe 0

    // another
    if (umap.find("Alto") != umap.end())
    {
        cout << "Found it" << endl;
    }
    else
    {
        cout << "Didn't Found" << endl;
    }

    // size
    cout << umap.size() << endl;
    umap["audi"]; // if not availbe it will do a entry and give value 0 and if available than it will give you exact value
    cout << umap.size() << endl;

    cout << "Printing the all Key and values : " << endl;

    for (auto x : umap)
    {
        cout << x.first << "->" << x.second << endl;
    }

    return 0;
}