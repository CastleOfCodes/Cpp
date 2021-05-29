#include<iostream>
#include<math.h>
using namespace std;
int convertdecimalTobinary(long long);
int main()
{
    int n;
    cout<<"Enter a decimal number to convert:";
    cin>>n;
    cout<<n<<" in decimal ="<<convertdecimalTobinary(n)<<" in bimary";
    return 0;
}
int convertdecimalTobinary(long long n)
{
    long long binnum=0;
    int rem=0,i=1;
    while (n!=0)
    {
        rem=n%2;
        n/=2;
        binnum+=rem*i;
        i*=10;
    }
    return binnum;
    
}