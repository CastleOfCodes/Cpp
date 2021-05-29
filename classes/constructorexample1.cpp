#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class stu
{
    char name[20], course[20];  //class members
    float fee; 
    public:
    stu(char name[20], char course[20])
    {
        strcpy(this -> name, name);
        strcpy(this -> course, course);
        fee = 0;
    }
    stu(char name[20], char course[20], float fee):stu(name,course)  //calling another constructor inside another
    {
        this -> fee = fee; 
    }
    void showstu();  //class member function initialization
};
void stu :: showstu()
{
    cout<<"Name: "<<name<<endl;
    cout<<"course: "<<course<<endl;
    cout<<"Fee: "<<fee<<endl;
}

int main()
{
    stu s1("John", "Science");
    stu s2("Alex", "Maths", 40000);
    s1.showstu();
    s2.showstu();
    return 0;
}