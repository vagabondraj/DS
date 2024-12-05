#include<bits/stdc++.h>
using namespace std;

/*
getter and setter are also called accessor and mutator and are 
mainly used in data hiding.
*/

class Rectangle
{
    private:
    int length;
    int breadth;

    public:
    void setLength(int l)
    {
        if(l>0)
        {
           length = l;
        }else
        {
            cout << "Please enter valid lenght." << endl;
        }
    }

    void setBreadth(int b)
    {
        if(b>0)
        {
            breadth = b;
        }else
        {
            cout << "Please enter valid breadth" << endl;
        }
    }

    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length+breadth);
    }
};


int main()
{
    Rectangle *r = new Rectangle();

    int l,b;
    cout << "Enter lenght and breadth:-" << endl;
    cin >> l >> b;
    r->setLength(l);
    r->setBreadth(b);
    cout << "Length was:- " << r->getLength() << endl;
    cout << "Breadth was:- " << r->getBreadth() << endl;

    cout << "Area of given rectangle is:- " << r->area() << endl;
    cout << "Perimeter of given rectangle is:- " << r->perimeter() << endl;

    return 0;
}