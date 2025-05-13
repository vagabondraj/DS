#include<bits/stdc++.h>
using namespace std;

bool checkpli(string s, int start, int end)
{
    if(start == end)
    {
        return true;
    }

    if(s[start] != s[end])
    {
        return false;
    }else
    {
        checkpli(s,start+1,end-1);
    }
}

int main()
{
    string s;
    cout << "Enter string: " << endl;
    cin >> s;

    if(checkpli(s,0,s.length()-1))
    {
        cout << "String is palindrom." << endl;
    }else
    {
        cout << "String is not palindrom." << endl;
    }
    return 0;
}