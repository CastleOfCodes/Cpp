#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s,str;
    cin>>s;
    str = s;
    s.erase(std::unique(s.begin(), s.end()), s.end());
    cout<<s;
}