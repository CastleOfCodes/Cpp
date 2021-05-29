#include<iostream>
using namespace std;

int maxhaming(int arr[], int n)
{
    int i, brr[2*n+1];
    for ( i = 0; i < n; i++)
    {
        brr[i] == arr[i];
    }
    for(i = 0; i < n; i++)
    {
        brr[n+i] == arr[i];
    }

    int maxham = 0;

    for(i = 1; i < n; i++)
    {
        int currmax = 0;
        for (int j = i, k = 0; j < (i+n); j++, k++)
        {
            if(brr[j] != arr[k])
            {
                currmax++;
            }
            if (currmax == n)
            {
                return n;
            }
            
            maxham = max(maxham, currmax);
        }
        return maxham;
    }
    
}

int main()
{
    int arr[]={1, 4, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxhaming(arr, n)<<endl;
    
    return 0;
    
}