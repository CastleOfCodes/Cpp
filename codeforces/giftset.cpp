#include<iostream>
using namespace std;

int main()
{
    int n,x,y,a,b,asum=0,bsum=0;
    while (cin>>n)
    {
        cin>>x>>y>>a>>b;
        asum = a;
        bsum = b;
        int count = 0;
        if(asum>=x && bsum>=y)
        {
            cout<<0;
        }
        else
        {
            while(asum<x && bsum<y)
            {
                asum += a;
                bsum += b;
                count++;
            }
            
        }
        
    }
    
}