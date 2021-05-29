#include<iostream>
using namespace std;
int main()
{
    int var=5;
    int *poinvar;
    poinvar=&var;
    cout<<*poinvar<<endl;
    *poinvar=7;
    cout<<var;
    return 0;
}