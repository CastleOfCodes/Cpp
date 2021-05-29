#include<iostream>
#include<list>
#include<iterator>
using namespace std;

class hashingop
{
private:
    int BUCKET;
    list<int> *table;
public:
    hashingop(int v);
    void insertitem(int x);
    void deleteItem(int key);

    int hashfunction(int x)
    {
        return (x%BUCKET);
    }
    void displayhash();
    
};

hashingop::hashingop(int b)
{
    this->BUCKET = b;
    table = new list<int>[BUCKET];
}

void hashingop::insertitem(int key)
{
    int index = hashfunction(key);
    table[index].push_back(key);
}
void hashingop::deleteItem(int key)
{
    int index = hashfunction(key);
    list <int> :: iterator i;
    for(i = table[index].begin(); i != table[index].end(); i++)
    {
        if(*i == key)
            break;
    }

    if(i != table[index].end())
    table[index].erase(i);
}

void hashingop :: displayhash()
{
    for (int i = 0; i < BUCKET; i++)
    {
         cout<<i;
        for (auto x : table[i])
        {
            cout << "---> "<< x;
        }
        cout << endl;
            
    }
        
}


int main()
{
    int arr[]={82, 22, 512, 55, 97};
    int n = 5;
    hashingop ht(10);
    for (int i = 0; i < n; i++)
    {
        ht.insertitem(arr[i]);
    }
    ht.displayhash();
    ht.deleteItem(22);
    ht.displayhash();
    

    return 0;
}