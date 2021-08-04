#include<iostream>
using namespace std;
int main()
{
    string str, orginal="hello";
    cin>>str;
    int j = 0,pass = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i] == orginal[j])
        {
            j++;
            pass++;

        }
    }
    if (pass==5)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    
}