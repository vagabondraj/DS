#include<bits/stdc++.h>
using namespace std;

void status(int loc, int des)
{
    cout << "Your current location is " << loc << " and distance remaining is " << des-loc << endl;

    // base case
    if(loc == des)
    {
        cout << "Journey completed." << endl;
        return;
    }
    
    // one step closer
    loc++;

    // recursive call
    status(loc,des);
}

int main()
{
    int loc;
    cout << "Enter current location : ";
    cin >> loc;

    int des;
    cout << "Enter destination : ";
    cin >> des;

    status(loc,des);
    return 0;
}