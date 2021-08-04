#include<iostream>
#include<vector>
using namespace std;
void quick(vector<int>& a)
{
   for (int i = 0; i < a.size(); i++)
   {
       for (int j = 0; j < a.size()-i-1; j++)
       {
           if (a[j] > a[j+1])
           {
               int temp = a[j];
               a[j] = a[j+1];
               a[j+1] = temp;
           }
           
       }
    
   }
   for (auto& it : a)
   {
       cout<<it<<" ";
   } 
}

int partition()
{
    int pivot = a[h];
    greater=a[l];
    for (int i = 0; i < h; i++)
    {
        if (a[l] <= pivot)
        {
            
        }
         
    }
    
    if(l<=pivot)
    {

    }
}

int main()
{
    vector<int> a ={25,8,44,88,10,33};
    int n=a.size();
    quick(a);
}