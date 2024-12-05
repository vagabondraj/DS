#include<bits/stdc++.h>
using namespace std;

class rectangle
{
    public:
    int len;
    int bre;

    void area()
    {
        cout << "Area of rectangle is:-" << len*bre << endl;
    }

    void perimeter()
    {
        cout << "Perimter is:-" << 2*(len+bre) << endl;
    }
};

int main()
{
    rectangle *p = new rectangle();
     // object is created into heap as we are using pointer
    p->len = 10;
    p->bre = 15;
    p->area();
    p->perimeter();
    
    return 0;
}