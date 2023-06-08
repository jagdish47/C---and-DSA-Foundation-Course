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

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLen(Node *head)
{

    if (head == NULL)
    {
        cout << "empty LL" << endl;
    }

    int len = 0;

    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

Node *reverseKNode(Node *&head, int k)
{

    if (head == NULL)
    {
        return NULL;
    }

    if (k > getLen(head))
    {
        cout << "Not enought Node to reverse";
        return head;
    }

    Node *prev = NULL;
    Node *curr = head;
    Node *forward = curr->next;

    int count = 0;

    while (count < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    // Recursive Call

    if (forward != NULL)
    {
        head->next = reverseKNode(forward, k);
    }

    return prev;
}

int main()
{

    Node *head = new Node(10);
    Node *one = new Node(20);
    Node *two = new Node(30);
    Node *three = new Node(40);
    Node *four = new Node(50);
    Node *five = new Node(60);

    head->next = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = NULL;

    cout << "Printing the LL : " << endl;
    print(head);

    // cout << "Length of LL : " << getLen(head) << endl;

    head = reverseKNode(head, 3);
    print(head);
    return 0;
}