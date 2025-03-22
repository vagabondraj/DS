#include<bits/stdc++.h>
using namespace std;

class queues
{
    int front,rear;
    int *arr;
    int size;

    public:

    queues(int s)
    {
        size=s;
        arr = new int[size];
        front =-1;
        rear =-1;
    }

    void enqueue(int ele)
    {
        if(rear > size)
        {
            cout << "Queue is full." << endl;
            return;
        }
        if(front == -1)
        {
            front =0;
        }
        rear++;
        arr[rear] = ele;
    }

    void dequeue()
    {
        if(front == -1 || front > rear)
        {
            cout << "Queue is empty.";
            return;
        }
        int val = arr[front];
        cout << "Dequeued elelement is : " << val << endl;
        front++;
    }

    int peek()
    {
        if(front == -1 || front > rear)
        {
            cout << "Queue is already empty." << endl;
            return -1;
        }
        return arr[front];
    }

    void isEmpty()
    {
        if(front == -1)
        {
            cout << "Queue is empty." << endl;
        }else
        {
            cout << "Queue is not empty." << endl;
        }
    }

    void display()
    {
        if(front == -1)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Element in queue:- " << endl;
        for(int i=front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~queues()
    {
        delete[] arr;
    }
};


int main()
{
    int size;
    cout << "Enter size of array: " << endl;
    cin >> size;

    queues q(size);
    q.enqueue(10);
    q.enqueue(12);
    q.enqueue(14);
    q.enqueue(16);

    q.display();

    q.dequeue();
    q.display();

    q.peek();

    q.isEmpty();

    return 0;
}