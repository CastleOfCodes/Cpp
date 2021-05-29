#include<iostream>
#include<conio.h>
using namespace std;

class triangle
{
    int l,b,h,a,p;
    public:
    void area();
    void perimeter();
    triangle(int l, int b, int h)
    {
        this -> l = l;
        this -> b = b;
        this -> h = h;
    }
};

void triangle :: area()
{
    a = (l+b+h)/2;
    cout<<"area = "<<a<<endl;
}

void triangle :: perimeter()
{
    p = (l+b+h);
    cout<<"perimeter = "<<p<<endl;
}

int main()
{
    triangle t1(2,3,4);
    t1.area();
    t1.perimeter();
    return 0;
}

