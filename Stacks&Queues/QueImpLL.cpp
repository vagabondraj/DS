#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(int val)
    {
        data=val;
        next=nullptr;
    }
};

class que
{
private:
    Node* front,*rear;
    public:
    Queues()
    {
        front=nullptr;
        rear=nullptr;
    }

    void push(int ele)
    {
        Node* temp = new Node(ele);
        if(rear == nullptr)
        {
            front = rear = temp;
            return;
        }
        rear->next=temp;
        rear=temp;
    }

    void pop()
    {
        if(front == nullptr)
        {
            cout << "Queue is empty." << endl;
            return;
        }
        Node* temp = front;
        front=front->next;
        if(front == nullptr)
        {
            rear=nullptr;
        }
        delete temp;
    }

    int peek()
    {
        if(front == nullptr)
        {
            return -1;
        }
        return front->data;
    }

    void display()
    {
        if(front == nullptr)
        {
            cout << "Queue is already empty." << endl;
            return;
        }
        Node* temp = front;
        while(temp)
        {
            cout << temp->data << " ";
            temp=temp->next;
        }
        cout << endl;
    }
};