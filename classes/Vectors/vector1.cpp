#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    // Vector initialization..............................

    vector<int> A;

    A.push_back(11);
    A.push_back(2);
    A.push_back(3);
    A.push_back(4);
    A.push_back(20);

    cout<<A[1]<<endl;

    // Vector sorting........................................

    sort(A.begin(), A.end()); //O(NlogN)

    vector<int>::iterator it3;

    for(it3 = A.begin(); it3 != A.end(); it3++)
    {
        cout<<*it3<<endl; 
    }

    // Binary searching......................................

    bool present = binary_search(A.begin(), A.end(), 3); //true

    present = binary_search(A.begin(), A.end(), 4); //true

    //Inserting elements.....................................

    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);

    vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100); //>=
    vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100);  //>

    cout<<*it<< " " <<*it2<<endl;
    cout<<it2-it<<endl;



}

