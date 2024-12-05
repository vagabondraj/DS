# include<bits/stdc++.h>
using namespace std;

class Rectangle
{
    public:
    int length;
    int breadth;

    Rectangle()
    {
        length=0;
        breadth=0;
    }

    Rectangle(int l, int b)
    {
        this->length =l;
        this->breadth =b;
    }

    Rectangle(Rectangle &rect)
    {
        this->length = rect.length;
        this->breadth = rect.breadth;
    }

    void area()
    {
        cout << "Area of rectangle is:-" << length*breadth << endl;
    }
};


int main()
{
    Rectangle *r = new Rectangle();
    r->area();

    Rectangle *s = new Rectangle(5,4);
    s->area();

    Rectangle *t = new Rectangle(*s);
    t->area();

    return 0;
}