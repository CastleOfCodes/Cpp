#include<iostream>
#include<queue>
using namespace std;

void showq(queue<int> gq)
{
    queue<int> g=gq;
    while(!g.empty())
    {
        cout<<'\t' <<g.front();
        g.pop();
    }
    cout<<'\n';
}
int main()
{
    queue<int> q;
     q.push(10);
     q.push(20);
     q.push(30);
     q.push(40);

     cout<<"The queue gquiz is:";
     showq(q);

     cout<<"\nSize:"<<q.size()<<endl;
     cout<<"\nFront:"<<q.front()<<endl;
     cout<<"\nBack:"<<q.back()<<endl;

     q.pop();
     cout<<"\nThe queue is:";
     showq(q);
}