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
        cout << "LL is empty" << endl;
        return;
    }

    if (head->next == NULL)
    {
        cout << head->next << " ";
        return;
    }

    Node *curr = head;

    while (curr != NULL)
    {

        if ((curr->next != NULL) && (curr->data == curr->next->data))
        {
            // the duplicate node
            Node *temp = curr->next;

            curr->next = curr->next->next;

            // deleting duplicate node
            temp->next = NULL;
            delete temp;
        }
        else
        {
            curr = curr->next;
        }
    }
}

int main()
{

    Node *head = new Node(1);
    Node *one = new Node(2);
    Node *two = new Node(2);
    Node *three = new Node(3);
    Node *four = new Node(4);
    Node *five = new Node(4);

    head->next = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;

    print(head);
    removeDuplicate(head);
    print(head);

    return 0;
}