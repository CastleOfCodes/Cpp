#include<iostream>
using namespace std;
int main()
{
    long long num,n;
    int count=0;
    cin>>n;
    long long temp = n;
    while (n!=0)
    {
        num = n%10;
        if(num == 4 || num == 7)
            count++;
        n = n/10;
    }
    if (count == 4 || count == 7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    
    

}