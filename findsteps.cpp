#include<iostream>
#include<conio.h>
using namespace std;

class stepscount
{
    public:
    int findsteps(int n)
    {
        int step[n+1];
        step[0] = 1;
        step[1] = 1;
        step[2] = 2;
        for (int i = 3; i <= n; i++)
        {
            step[i] = step[i-1]+step[i-2]+step[i-3];
        }
        
        return step[n];
    }
};

int main()
{
    int n;
    cin>>n;
    stepscount s;
    cout<<s.findsteps(n);
    return 0;
}