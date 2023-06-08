#include <iostream>
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

Node *findMiddle(Node *&head)
{

    // If our LL is empty
    if (head == NULL)
    {
        cout << "LINK LIST IS EMPTY : " << endl;
    }

    // If there is only single element available in LL
    if (head->next == NULL)
    {
        return head;
    }

    // Assigning two pointer slow and fast

    Node *slow = head;
    // Node *fast = head; //if you want lower value
    Node *fast = head->next; // if you want one value higher

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;

        // still fast is on NULL or not checking
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }

    // returning slow node because this is on middle node
    return slow;
}

int main()
{

    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    cout << "PRINTING THE LL : " << endl;
    print(head);

    cout << "Middle Element : " << findMiddle(head)->data << endl;

    return 0;
}