#include<bits/stdc++.h>
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