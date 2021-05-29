//Solution to "Subarray with given sum"

#include<stdio.h>

void subArraySum(int arr[], int n, int sum) 
{ 
    int curSum=arr[0], start=0, i;
    
    for(i=1; i<=n; i++)
    {
        while(curSum > sum && start < i-1)
        {
            curSum-=arr[start];
            start++;
        }
        
        if(curSum == sum)
        {
            printf("%d %d\n",start+1,i);
            return;
        }
        
        if(i<n)
            curSum += arr[i];
    }
    printf("-1\n");
} 



int main() 
{
    int T;
    scanf("%d",&T);
    
    for(int i=0; i<T; i++)
    {
        int n,s;
        scanf("%d %d",&n,&s);
        int arr[n];
        for(int j=0; j<n; j++)
            scanf("%d",&arr[j]);
        
        subArraySum(arr,n,s);
    }
	
	return 0;
}