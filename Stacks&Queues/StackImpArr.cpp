#include<bits/stdc++.h>
using namespace std;

class stacks
{
    int top;
    int *arr;
    int size;

    public:
    stacks(int s)
    {
        top=-1;
        size=s;
        arr= new int[size];
    }

    void push(int ele)
    {
        if(top > size)
        {
            cout << "Stack is full";
            return;
        }else
        {
            top++;
            arr[top] = ele;
        }
    }

    int pop()
    {
        if(top == -1)
        {
            cout << "Stack is already empty." << endl;
            return -1;
        }else
        {
            return arr[top];
            top--;
        }
    }

    int peak()
    {
        if(top == 1)
        {
            cout << "Stack is empty." << endl;
            return -1;
        }else
        {
            cout << "Element at peak: " << endl;
            return arr[top];
        }
    }

    bool isempty()
    {
        if(top == -1)
        {
            return true;
        }
        return false;
    }

    void display()
    {
        if(top == -1)
        {
            cout << "Stack is already empty." << endl;
        }
        cout << "Stack element are:-- " << endl;
        for(int i=top; i>=0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // distructor
    ~stacks()
    {
        delete[] arr;
    }
};


int main()
{
    int size;
    cout << "Enter size of stack: " << endl;
    cin >> size;
    stacks s(size);

    s.push(10);
    s.push(12);
    s.push(14);

    s.display();
    s.pop();
    s.display();
    s.peak();

    s.isempty();

    return 0;
}#include<bits/stdc++.h>
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

class Queues
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
            front=rear=temp;
            return;
        }

        rear->next = temp;
        rear = temp;
    }

    void pop()
    {
        if(front == nullptr)
        {
            cout << "Queue is empty" <<endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        if(front == nullptr)
        {
            rear = nullptr;
        }
        delete temp;
    }

    int peek()
    {
        if(front == nullptr)
        {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return front->data;
    }

    void display()
    {
        if(front == nullptr)
        {
            cout << "Empty queue." << endl;
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


int main()
{
    Queues q;
    q.push(12);
    q.push(14);
    q.push(16);
    q.push(18);

    q.display();
    q.pop();
    q.display();

    cout << "Element at top: " << q.peek() << endl;
    return 0;
}#include<bits/stdc++.h>
using namespace std;

bool IsBalanced(string exp)
{
    stack<char> s;
    unordered_map<char, char> matching = {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };

    for(char ch: exp)
    {
        if(ch == '(' || ch == '[' || ch == '{')
        {
            s.push(ch);
        }
        else if(ch == ')' || ch == ']' || ch == '}')
        {
            if(s.empty() || s.top() != matching[ch])
            {
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}

int main()
{
    string s;
    cout << "Enter string." << endl;
    cin >> s;

    if(IsBalanced(s))
    {
        cout << "String is balanced" << endl;
    }else
    {
        cout << "String is not balanced." << endl;
    }

    return 0;
}