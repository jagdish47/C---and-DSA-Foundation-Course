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
        cout << "link list is empty " << endl;
        return;
    }
    if (head->next == NULL)
    {
        cout << head->next << endl;
        return;
    }

    Node *temp = head;

    while (temp != NULL)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *sortingThree(Node *&head)
{

    if (head == NULL)
    {
        cout << "The Link List is Empty : ";
        return NULL;
    }

    if (head->next == NULL)
    {
        return head;
    }

    Node *zeroHead = new Node(-101);
    Node *zeroTail = zeroHead;

    Node *oneHead = new Node(-101);
    Node *oneTail = oneHead;

    Node *twoHead = new Node(-101);
    Node *twoTail = twoHead;

    Node *curr = head;

    while (curr != NULL)
    {
        if (curr->data == 0)
        {
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;

            zeroTail->next = temp;
            zeroTail = temp;
        }
        else if (curr->data == 1)
        {
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;

            oneTail->next = temp;
            oneTail = temp;
        }
        else
        {
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;

            twoTail->next = temp;
            twoTail = temp;
        }
    }

    Node *temp = oneHead;
    oneHead = oneHead->next;
    temp->next = NULL;
    delete temp;

    temp = twoHead;
    twoHead = twoHead->next;
    temp->next = NULL;
    delete temp;

    if (oneHead != NULL)
    {
        zeroTail->next = oneHead;
        if (twoHead != NULL)
        {
            oneTail->next = twoHead;
        }
    }
    else
    {
        if (twoHead != NULL)
        {
            zeroTail->next = twoHead;
        }
    }

    temp = zeroHead;
    zeroHead = zeroHead->next;
    temp->next = NULL;
    delete temp;

    return zeroHead;
}

int main()
{

    Node *head = new Node(0);
    Node *one = new Node(1);
    Node *two = new Node(2);
    Node *three = new Node(2);
    Node *four = new Node(1);
    Node *five = new Node(0);
    Node *six = new Node(0);

    head->next = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = six;

    cout << "Printing the Link List " << endl;
    print(head);

    Node *ans = sortingThree(head);
    print(ans);

    return 0;
}