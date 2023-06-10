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

void print(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is empty : " << endl;
    }

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void removeDuplicate(Node *&head)
{
    if (head == NULL)
    {
        cout << "link list is empty" << endl;
        return;
    }
    if (head->next == NULL)
    {
        cout << head->data << endl;
        return;
    }

    while (head != NULL)
    {
        Node *curr = head->next;

        while (curr != NULL)
        {
            if (curr->data != head->data)
            {
                curr = curr->next;
            }
            else
            {
                Node *temp = curr;
                curr = curr->next;

                temp->next = NULL;
                delete temp;
            }
        }

        head = head->next;
    }
}

int main()
{

    Node *head = new Node(1);
    Node *one = new Node(2);
    Node *two = new Node(2);
    Node *three = new Node(3);
    Node *four = new Node(4);
    Node *five = new Node(5);
    Node *six = new Node(6);
    Node *seven = new Node(3);

    head->next = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = six;
    six->next = seven;

    print(head);
    removeDuplicate(head);
    print(head);

    return 0;
}