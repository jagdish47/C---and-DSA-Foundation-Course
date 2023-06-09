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

void print(Node *head)
{

    if (head == NULL)
    {
        cout << "LL is Empty " << endl;
    }

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

bool detectLoop(Node *&head)
{

    if (head == NULL)
    {
        return false;
    }

    Node *slow = head;
    Node *fast = head;

    while (fast != NULL)
    {

        fast = fast->next;

        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    Node *head = new Node(10);
    Node *one = new Node(20);
    Node *two = new Node(30);
    Node *three = new Node(40);
    Node *four = new Node(50);
    Node *five = new Node(60);
    Node *six = new Node(70);
    Node *seven = new Node(80);
    Node *eight = new Node(90);

    head->next = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = six;
    six->next = seven;
    seven->next = eight;
    eight->next = five;

    // cout << "Printing the LL : " << endl;
    // if you printing this loop because there is no NULL so it will run till Infinite. so no point to print the link list
    // print(head);

    cout << detectLoop(head) << endl;
    return 0;
}