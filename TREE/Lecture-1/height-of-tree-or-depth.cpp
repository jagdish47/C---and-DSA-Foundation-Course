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
    cout << "Enter the root node : ";
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

int height(Node *root)
{

    if (root == NULL)
    {
        return 0;
    }

    int leftHeight = height(root->left);

    int rightHeight = height(root->right);

    int ans = max(leftHeight, rightHeight) + 1;

    return ans;
}

int main()
{

    Node *root = NULL;

    root = buildTree();

    return 0;
}