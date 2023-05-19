#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 

bool isBalanced(string expr)
{ 
    stack<char> s;
    char x;
    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
        {
            s.push(expr[i]);
            continue;
        }
        if (s.empty())
        {
            return false;
            break;
        }    
        switch (expr[i]) {
        case ')':
            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
            {
                return false;
            }
            break;
 
        case '}':
 
            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
            {
                return false; 
            }
            break;
 
        case ']':
            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
            {
                return false;
            }
            break;
        }
    }
    return (s.empty());
}
 

int main()
{
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        if (isBalanced(str))
        {
            arr[i]="YES";
        }
        else
        {
            arr[i]="NO";
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}