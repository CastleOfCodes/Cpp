#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a limit:";
    cin>>n;
    int num1=0, num2=1, num3;
    cout<<"Fibanocci series is: 0, 1";
    for (int i = 2; i < n; i++)
    {
        num3=num1+num2;
        cout<<", "<<num3;
        num1=num2;
        num2=num3;
    }
    return 0;   
}