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
    rectangle r1; // object is created into stack
    r1.len=10;
    r1.bre=5;
    r1.area();
    r1.perimeter();

    return 0;
    
}