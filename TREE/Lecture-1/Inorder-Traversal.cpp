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
    cout << "Enter Root Node : ";
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

void inorderTraversal(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    inorderTraversal(root->left);

    cout << root->data << " ";

    inorderTraversal(root->right);
}

int main()
{

    Node *root = NULL;

    root = buildTree();

    inorderTraversal(root);

    return 0;
}