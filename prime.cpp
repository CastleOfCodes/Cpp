#include<iostream>
using namespace std;
int main()
{
    int n;
    char choice,y;
    do{
        bool flag=true;
        cout<<"enter the number:";
        cin>>n;
        for(int i = 2; i <= n / 2; ++i)
        {
            if(n % i == 0)
            {
                flag=false;
                break;
            }
        }
        if (flag)
        {
            cout<<"The given number is prime"<<endl;
        }
        else
        {
            cout<<"the given number is not a prime "<<endl;
        }
        cout<<"Do you want to continue or not(y/n):";
        cin>>choice;
    }while(choice == 'y');
    
    return 0;
}