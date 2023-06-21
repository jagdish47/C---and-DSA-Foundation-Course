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
    cout << "Enter root Node : ";
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);

    root->left = buildTree();

    root->right = buildTree();

    return root;
}

void postorderTraversal(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    postorderTraversal(root->left);

    postorderTraversal(root->right);

    cout << root->data;
}

int main()
{

    Node *root = NULL;

    root = buildTree();

    return 0;
}