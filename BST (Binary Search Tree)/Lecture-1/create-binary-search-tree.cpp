#include <iostream>
#include <queue>
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
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertIntoBST(Node *root, int data)
{

    if (root == NULL)
    {
        // this is the first node we have to create
        root = new Node(data);
        return root;
    }

    // no the first node

    if (root->data > data)
    {
        // insert in left
        root->left = insertIntoBST(root->left, data);
    }
    else
    {
        // insert into right
        root->right = insertIntoBST(root->right, data);
    }
    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    // initially
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        // A
        Node *temp = q.front();
        // B
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
            // C
            cout << temp->data << " ";
            // D
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

void preorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

// only valid for unique value in BST
bool searchInBST(Node *root, int target)
{

    if (root == NULL)
    {
        return false;
    }

    if (root->data == target)
    {
        return true;
    }

    if (target > root->data)
    {
        return searchInBST(root->right, target);
    }
    else
    {
        return searchInBST(root->left, target);
    }
}

int findMini(Node *root)
{

    Node *temp = root;

    if (temp == NULL)
    {
        return -1;
    }

    while (temp->left != NULL)
    {
        temp = temp->left;
    }

    return temp->data;
}

int myFindMinimum(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }

    if (root->left == NULL)
    {
        return root->data;
    }

    return myFindMinimum(root->left);
}

int findMaxi(Node *root)
{

    Node *temp = root;

    if (temp == NULL)
    {
        return -1;
    }

    while (temp->right != NULL)
    {
        temp = temp->right;
    }

    return temp->data;
}

int myFindMaxi(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }

    if (root->right == NULL)
    {
        return root->data;
    }

    return myFindMinimum(root->right);
}

int main()
{
    Node *root = NULL;
    cout << "Enter the data for Node " << endl;
    takeInput(root);
    cout << "Printing the tree" << endl;
    levelOrderTraversal(root);

    int mini = findMini(root);
    int myMini = myFindMinimum(root);

    cout << "Finding Mini : " << mini << endl;
    cout << "Finding MINIM : " << myMini << endl;

    cout << "---------------------------" << endl;
    int maxi = findMaxi(root);
    int myMaxi = myFindMaxi(root);

    cout << "Maxi : " << maxi << endl;
    cout << "my Maxi : " << myMaxi << endl;
    return 0;
}