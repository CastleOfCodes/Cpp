#include<stack>
#include<iostream>
using namespace std;

bool ispar(string str)
{
    stack<char> s;
    char temp;
    
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
        {
            s.push(str[i]);
            continue;
        }
        
        if(s.empty())
            return false;
        
        switch(str[i])
        {
            case ')':   temp = s.top();
                        s.pop();
                        if(temp=='{' || temp=='[')
                            return false;
                        break;
                        
            case '}':   temp = s.top();
                        s.pop();
                        if(temp=='(' || temp=='[')
                            return false;
                        break;
                        
            case ']':   temp = s.top();
                        s.pop();
                        if(temp=='{' || temp=='(')
                            return false;
                        break;
        }
    }
    
    return(s.empty());
}


int main()
{
    int t;
    cin>>t;
    
    string str[t];
    for(int i=0; i<t; i++)
        cin>>str[i];
        
    for(int i=0; i<t; i++)
        if(ispar(str[i]))
            cout<<"balanced\n";
        else
            cout<<"not balanced\n";

    return 0;
}
