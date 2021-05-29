#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void showlist(list <int> g)
{
    list <int> :: iterator it;
    for ( it = g.begin(); it != g.end(); ++it)
    {
        cout<<'\t'<<*it;
    }
    cout<<'\n';
}
int main()
{
    list<int> LL;
    LL.push_back(11);
    LL.push_back(22);
    LL.push_back(33);
    LL.push_back(44);

    showlist(LL);

    LL.push_front(99);

    showlist(LL);

    //cout<< "Hello world!\n";

    return 0;
}