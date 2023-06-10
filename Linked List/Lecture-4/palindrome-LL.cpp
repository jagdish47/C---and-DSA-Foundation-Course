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

Node *reverseHalf(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *next = curr->next;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

bool checkPalindrome(Node *&head)
{

    if (head == NULL)
    {
        cout << "the link-list is empty : " << endl;
        return true;
    }

    if (head->next == NULL)
    {
        cout << head->data << endl;
        return true;
    }

    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL)
    {
        fast = fast->next;

        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }

    Node *reverseLLHead = reverseHalf(slow->next);

    slow->next = reverseLLHead;

    Node *temp1 = head;
    Node *temp2 = reverseLLHead;

    while (temp2 != NULL)
    {
        if (temp1->data != temp2->data)
        {
            return false;
        }
        else
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return true;
}
int main()
{

    Node *head = new Node(10);
    Node *one = new Node(20);
    Node *two = new Node(30);
    Node *three = new Node(20);
    Node *four = new Node(10);

    head->next = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;

    cout << "PRINTING THE LL" << endl;
    print(head);

    bool isPalindrome = checkPalindrome(head);

    if (isPalindrome)
    {
        cout << "LL is valid Palindrome" << endl;
    }
    else
    {
        cout << "LL is invalid Palindrome" << endl;
    }

    return 0;
}