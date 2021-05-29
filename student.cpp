#include<iostream>
using namespace std;
class student
{
    private:
    int marks[100];
    string name, rollno;
    float percentage;
    public:
    //Functions
    void getdata()
    {
        cout<<"Enter the name of the student:";
        cin>>name;
        cout<<"Enter the roll number of the student:";
        cin>>rollno;
        cout<<"Enter the marks of student:";
        cin>>marks[0]>>marks[1]>>marks[2];
    }
    void displaypercentage()
    {
        percentage=(marks[0]+marks[1]+marks[2])/3;
        cout<<"the percentage of the student is = "<<percentage<<endl;
    }
};
int main()
{
    //create an object of student class
    student std[100];
    cout<<"Enter the number of the students:";
    int num;
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        std[0].getdata();
        std[0].displaypercentage();

    }
    
    return 0;
}