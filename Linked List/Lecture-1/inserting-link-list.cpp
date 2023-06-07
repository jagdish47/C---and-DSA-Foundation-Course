#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertHead(Node *head, int data)
{
    Node *newNode = new Node(data);

    newNode->next = head;

    head = newNode;
}

void print(Node *&head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    insertHead(head, 20);
    insertHead(head, 40);
    insertHead(head, 60);
    insertHead(head, 90);
    insertHead(head, 100);

    print(head);

    return 0;
}