#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,rem=0,amsnum=0,temp;
    cout<<"Enter a 3 digit number:";
    cin>>n;
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        temp/=10;
        amsnum+= pow(rem,3);

    }
    if(amsnum==n)
    {
        cout<<n<<" is a amstrong number";
    }
    else
    {
        cout<<n<<" is not a amstrong number";
    }
    
    return 0;
}