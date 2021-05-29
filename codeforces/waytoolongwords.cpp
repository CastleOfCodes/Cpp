#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

char abrevation(string str)
{
    int size;
    size = str.size();
    if(size > 10)
    {
        cout<<str[0]<<size-2<<str[size-1]<<endl;
    }
    else
    {
        cout<<str<<endl;
    }
    
}

int main()
{
    string str;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {   
        cin>>str;
        abrevation(str);
    }
    return 0;
}