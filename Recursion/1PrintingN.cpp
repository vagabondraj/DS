#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    // base case
    if(n == 0)
    {
        return;
    }

    // recursive call
    print(n-1);

    //printing
    cout << n << " ";

    // to reverse printing just change order printing and recursive call order
}

int main()
{
    int n;
    cout << "Enter number:- ";
    cin >> n;

    print(n);
    return 0;
}