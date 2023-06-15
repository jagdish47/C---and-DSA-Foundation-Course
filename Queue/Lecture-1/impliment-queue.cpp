#include <bits/stdc++.h>
using namespace std;

class Queue
{

public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int data)
    {

        if (rear == size)
        {
            cout << "Queue is full : " << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    void pop()
    {

        if (front == rear)
        {
            cout << "Query is empty" << endl;
        }
        else
        {
            arr[front] = -1;
            front++;

            if (front == rear)
            {
                rear = 0;
                front = 0;
            }
        }
    }

    int getFront()
    {
        if (front == rear)
        {
            cout << "queue is not empty" << endl;
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    int isEmpty()
    {

        if (rear == front)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int getSize()
    {
        return rear - front;
    }
};

int main()
{

    Queue q(10);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "size : " << q.getSize() << endl;
    cout << "empty : " << q.isEmpty() << endl;
    return 0;
}