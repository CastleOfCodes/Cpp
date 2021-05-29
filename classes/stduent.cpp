#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class student
{
    char name[20];
    int roll_no;
    public:
    void readstudent()
    {
        cout<<"enter the student name and rollno:";
        cin>>name>>roll_no;
    }
    //void getstudent(char[20], int);
    void getstudent();
};

void student :: getstudent()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Roll no: "<<roll_no;
}

/*void student :: getstudent(char naame[20], int rooll_no){
        strcpy(this-> name, naame);
        this -> roll_no = rooll_no;
        cout<<"Name: "<<name<<endl;
        cout<<"Rollno: "<<roll_no<<endl;
    }
*/


int main()
{
    student s;
//    s.getstudent("John", 2);
    s.readstudent();
    s.getstudent();
    return 0;
}