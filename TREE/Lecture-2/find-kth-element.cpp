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

bool kthElement(Node *root, int k, Node *p)
{

    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == p->data)
    {
        return true;
    }

    bool leftAns = kthElement(root->left, k, p);
    bool rightAns = kthElement(root->right, k, p);

    if (leftAns || rightAns)
    {
        k--;
    }

    if (k == 0)
    {
        cout << root->data << endl;
        k = -1;
    }
    return leftAns || rightAns;
}

int main()
{

    Node *root = NULL;

    root = buildTree();

    levelOrderTraversing(root);

    return 0;
}