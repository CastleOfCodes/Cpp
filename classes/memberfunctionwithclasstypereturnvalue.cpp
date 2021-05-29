#include<iostream>
#include<conio.h>
using namespace std;

class test
{
    int a,b;
    public:
    void getdata();
    void putdata();
    test sum(test);
};

void test :: getdata()
{
    cout<<"Enter the value of a and b:";
    cin>>a>>b;
}

void test :: putdata()
{
    cout<<"a :"<<a<<endl;
    cout<<"b :"<<b<<endl;
}
test test :: sum(test t2)
{
    test t3;
    t3.a = a + t2.a;
    t3.b = b + t2.b;
    return t3;
}
int main()
{
    test t1,t2,t3;
    t1.getdata();
    t2.getdata();
    t1.putdata();
    t2.putdata();
    t3 = t1.sum(t2);
    cout<<"t3 object data is: "<<endl;
    t3.putdata();

    return 0;
}