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
}

bool detectLoop(Node *&head)
{

    if (head == NULL)
    {
        cout << "LL is empty : " << endl;
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

        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

Node *findingStartNode(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL Is Empty : " << endl;
        return NULL;
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

        if (slow == fast) // slow and fast met here so we knew that there is a loop available.
        {
            slow = head; // and pointed slow to head again and break the loop
            break;
        }
    }
    while (slow != fast) // at some point the slow and fast will met at the point they met that is your starting point.
    {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}

Node *removeLoop(Node *&head)
{

    if (head == NULL)
    {
        cout << "LL Is Empty : " << endl;
        return NULL;
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

        if (slow == fast) // slow and fast met here so we knew that there is a loop available.
        {
            slow = head; // and pointed slow to head again and break the loop
            break;
        }
    }

    Node *prev = fast;   // taking a prev node
    while (slow != fast) // at point we know there is loop start
    {
        prev = fast; // at that point prev is pointing to that start point
        slow = slow->next;
        fast = fast->next;
    }

    prev->next = NULL; // so we pointing that to null and breaking the loop

    return slow;
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
    Node *nine = new Node(100);

    head->next = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = six;
    six->next = seven;
    seven->next = eight;
    eight->next = nine;
    nine->next = four;

    // cout << "Printing the Link List : " << endl;
    // print(head);

    // cout << detectLoop(head) << endl;

    cout << "starting point of Loop : " << findingStartNode(head)->data << endl;
    removeLoop(head);
    print(head);

    return 0;
}