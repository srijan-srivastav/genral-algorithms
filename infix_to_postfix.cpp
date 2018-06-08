#include <bits/stdc++.h>
using namespace std;

int checkPrecedence(char ch)
    {
        switch(ch)
        {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        }
        return -1;
    } 
bool is_character(char ch)
{
    return ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'));
}
 
void infix_postfix(string s)
{
    int l = s.length();
    stack<int> Stack;
    vector<char> v;
 
    for(int i=0; i<l; i++)
    {
        if(is_character(s[i]))
            v.push_back(s[i]);
 
        else if(s[i]=='(')
            Stack.push(s[i]);
 
        else if(s[i]==')')
        {
            while(!Stack.empty() && Stack.top()!='(')
            {
                v.push_back(Stack.top());
                Stack.pop();
            }
            Stack.pop();
        }
 
        else
        {
            while (!Stack.empty() && checkPrecedence(s[i]) <= checkPrecedence(Stack.top()))
                    {
                        v.push_back(Stack.top());
                        Stack.pop();
                    }
                    Stack.push(s[i]);
        }
    }
 
    while(!Stack.empty())
    {
        v.push_back(Stack.top());
        Stack.pop();
    }
 
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i];
    }
    cout<<endl;
}
 
 
int main()
{
    string s;
    cin>>s;
    infix_postfix(s);
}

