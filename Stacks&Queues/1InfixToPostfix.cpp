#include<bits/stdc++.h>
using namespace std;

int precedence(char op)
{
    if(op== '^')
    {
        return 3;
    }
    if(op == '*' || op == '/')
    {
        return 2;
    }
    if(op == '+' || op == '-')
    {
        return 1;
    }
    return 0;
}

string InfixToPostfix(string& s) {
    stack<char> st;
    string ans = "";
    int i=0;
    while(i < s.length())
    {
        if((s[i] >= 'A' && s[i] <= 'Z') ||
       (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
       {
           ans+=s[i];
       }else if(s[i] == '(')
       {
           st.push(s[i]);
       }else if(s[i] == ')')
       {
           while(!st.empty() && st.top() != '(')
           {
               ans+=st.top();
               st.pop();
           }
           st.pop();
       }else
       {
           while(!st.empty() && precedence(s[i]) <= precedence(st.top()))
           {
               ans+=st.top();
               st.pop();
           }
           st.push(s[i]);
       }
       i++;
    }
    while(!st.empty())
    {
        ans+=st.top();
        st.pop();
    }
    return ans;
}


int main()
{
    string infix;
    cout << "Enter infix string:- " << endl;
    cin >> infix;
    string postfix = InfixToPostfix(infix);
    cout << "Postfix expression: -" << postfix << endl;
    return 0;
}