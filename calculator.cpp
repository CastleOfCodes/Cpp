#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n1,n2,option;
    cout<<"Enter two numbers:";
    cin>>n1>>n2;
    cout<<"choose an option to perform:";
    cout<<"(1.Addition 2.Subtraction 3.Multiplication 4.Division) =";
    cin>>option;
    switch(option)
    {
        case 1:
            cout<<(n1+n2);
            break;
        case 2:
            cout<<abs(n2-n1);
            break;
        case 3:
            cout<<(n1*n2);
            break;
        case 4:
            cout<<(n1/n2);
            break;
        default:
            cout<<"Enter a valid integer";
    }
}