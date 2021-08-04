#include<iostream>
using namespace std;
int main()
{
    int n,i,num,temp;
    cin>>n;
    temp = n;
    if (n == 47 || n == 4 || n == 7 || n == 44 || n == 77 || n == 74 || n == 477 || n == 447 || n == 444 || n == 777 || n == 744 || n ==747 || n == 774 || n == 474)
    {
        cout<<"YES";
    }
    else if (n%4==0 || n%7==0 || n%47==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    
    
    
}