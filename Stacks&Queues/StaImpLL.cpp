#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int x)
    {
        data=x;
        next= nullptr;
    }
};

class stacks
{
    Node* top;
    public:
    stacks()
    {
        top=nullptr;
    }

    void push(int x)
    {
       Node *temp = new Node(x);
       temp->next=top;
       top=temp;
    }

    void pop()
    {
        if(!top)
        {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Element removed from top is: " << top->data << endl;
        Node* temp = top;
        top=top->next;
        delete temp;  
    }

    void peek()
    {
        if(!top)
        {
            cout << "Stack is already empty" << endl;
            return;
        }
        cout << "Element at top is:- " << top->data << endl;
    }

    void display()
    {

        if(!top)
        {
            cout << "Stack is empty." << endl;
            return;
        }

        Node* temp = top;
        cout << "Elements in stack is:--" << endl;
        while(temp)
        {
            cout << temp->data << " ";
            temp=temp->next;
        }
        cout << endl;
    }
};


int main()
{
    stacks s;
    s.push(12);
    s.push(14);
    s.push(16);
    s.push(18);

    s.display();

    s.pop();

    s.display();

    s.peek();

    return 0;
}