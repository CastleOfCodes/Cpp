#include<iostream>
#include<math.h>
int convertbinaryToDecimal(long long);
using namespace  std;
int main()
{
    long long n;
    cout<<"Enter a binary number:";
    cin>>n;
    cout<<n<<" in binary = " << convertbinaryToDecimal(n)<< " in decimal";
    return 0;
}
int convertbinaryToDecimal(long long n)
{
    int decnum=0, i=0, rem;
    while(n!=0)
    {
        rem=n%10;
        decnum+=rem*pow(2,i);
        n=n/10;
        i++;
    }
    return decnum;
}
