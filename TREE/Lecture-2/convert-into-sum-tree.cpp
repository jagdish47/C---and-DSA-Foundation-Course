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
    cout << "Enter data in Tree : ";
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

int binarySumTree(Node *root)
{

    if (root == NULL)
    {
        return -1;
    }

    int leftSum = binarySumTree(root->left);

    int rightSum = binarySumTree(root->right);

    root->data = leftSum + rightSum;
}

int main()
{

    Node *root = NULL;
    root = buildTree();

    levelOrderTraversing(root);

    return 0;
}