#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node *buildTree()
{
    int data;
    cout << "enter data : ";
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);

    cout << "enter data in Left : ";
    root->left = buildTree();

    cout << "enter data in Right : ";
    root->right = buildTree();

    return root;
}

int main()
{
    Node *root = NULL;
    root = buildTree();

    return 0;
}