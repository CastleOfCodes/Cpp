#include<iostream>
using namespace std;
bool isAmstrong(int n);
int main()
{
    int n,i;
    cout<<"Enter the limit:";
    cin>>n;
    cout<<"The amstrong number between 10 and "<<n<<" are : ";
    for(i=10;i<n;i++)
    {
        bool checkamstrong = isAmstrong(i);
        if(checkamstrong){
            cout<<i<<endl;
        }
    }
    return 0;
}
bool isAmstrong(int n)
{
    int temp=n,rem=0,result=0;
    while(temp!=0)
    {

        rem=temp%10;
        temp/=10;
        result+=rem*rem*rem;

    }
    if(result==n)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}