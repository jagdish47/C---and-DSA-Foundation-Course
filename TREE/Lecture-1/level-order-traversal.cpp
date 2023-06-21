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
    cout << "enter data in tree : ";
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    // creating new Node
    Node *root = new Node(data);

    cout << "enter data in left -> ";
    root->left = buildTree();

    cout << "enter data in right -> ";
    root->right = buildTree();

    return root;
}

void levelOrderTraversal(Node *root)
{

    queue<Node *> q;

    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();

        q.pop();

        cout << temp->data << " ";

        if (temp->left)
        {
            q.push(temp->left);
        }

        if (temp->right)
        {

            q.push(temp->right);
        }
    }
}

int main()
{

    Node *root = NULL;

    root = buildTree();

    levelOrderTraversal(root);

    return 0;
}