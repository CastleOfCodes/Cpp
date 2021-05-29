#include<bits/stdc++.h>

using namespace std;

class solution{
    stack<char> s;
    queue<char> q;
    public:
    void pushCharacter(char i){
        s.push(i);
    }
    void enqueueCharacter(char i){
        q.push(i);
    }
    char popCharacter(){
        char temp = s.top();
        s.pop();
        return temp;
    }
    char dequeueCharacter(){
        char temp = q.front();
        q.pop();
        return temp;
    }

};

int main()
{
    string s;
    getline(cin, s);

    solution obj;
    for(int i = 0; i < s.length(); i++){
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;
    
    for (int i = 0; i < s.length()/2; i++)
    {
        if (obj.popCharacter() != obj.dequeueCharacter())
        {
            isPalindrome = false;
        }
        
    }
    if(isPalindrome){
        cout<<"The word is Palindrome";
    }
    else
    {
        cout<<"The word is not palindrome";
    }
    
    

}