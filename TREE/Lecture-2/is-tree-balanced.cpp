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
    cout << "Enter the data in Tree : ";
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);
    cout << "Enter data for left part of " << data << " node " << endl;
    root->left = buildTree();
    cout << "Enter data for right part of " << data << " node " << endl;
    root->right = buildTree();

    return root;
}

void levelOrderTraversing(Node *root)
{
    queue<Node *> q;

    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;

            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
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
}

bool isTreeBalanced(Node *root)
{

    if (root == NULL)
    {
        return false;
    }
}

int main()
{

    Node *root = NULL;

    root = buildTree();

    levelOrderTraversing(root);

    return 0;
}