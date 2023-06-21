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
    cout << "enter root node : ";
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

void preorderTraversal(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    cout << root->data;

    preorderTraversal(root->left);

    preorderTraversal(root->right);
}

int main()
{

    Node *root = NULL;
    root = buildTree();

    preorderTraversal(root);

    return 0;
}