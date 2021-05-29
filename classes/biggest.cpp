#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
    int num;
    public:
    void getnum()
    {
        cout<<"Enter the value:";
        cin>>num;
    }
    void putnum();
    void bignum(sample);
};

void sample :: putnum()
{
    cout<<"num :"<<num<<endl;
}
void sample :: bignum(sample s2)
{
    if(num > s2.num)
    {
        cout<<num<<" is greater than "<<s2.num<<endl;
    }
    else if(s2.num > num)
    {
        cout<<s2.num<<" is greater than "<<num<<endl;
    }
    else
    {
        cout<<s2.num<<" and "<<num<<" are equal"<<endl;
    }
    
}

int main()
{
    sample s1,s2;
    s1.getnum();
    s2.getnum();
    s1.putnum();
    s2.putnum();
    s1.bignum(s2);
}